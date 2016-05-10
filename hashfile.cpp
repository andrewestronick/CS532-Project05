#include "hashfile.h"


HashFile::HashFile(std::string fileName, int n, int bucketSize)
{
    file.open(fileName, std::fstream::in | std::fstream::out | std::fstream::binary | std::fstream::trunc);
    if(!file.is_open())
        exit(EXIT_FAILURE);

    this->n = n;
    this->bucketSize = bucketSize;

    bucketMap = new int[n];

    initMap();

    Bucket b(bucketSize);
    for(int i = 0; i < bucketSize; ++i)
        b.pushRecord(Record());

    for(int i = 0; i < n; ++i)
        b.saveBucket(file, i);

    initMap();
}


HashFile::~HashFile()
{
    file.close();
    delete bucketMap;
}

void HashFile::initMap()
{
    for(int i = 0; i < n; ++i)
        bucketMap[i] = 0;
}


int HashFile::linearProbe(int i, int key, int step)
{
    return (key + i * step) % n;
}


int HashFile::store(Record record)
{
    int index = 0;
    int key = record.getID();
    int homeBucket = linearProbe(index, key, 1);
    int bucketNumber = homeBucket;

    while(true)
    {
        if(bucketMap[bucketNumber] < bucketSize)
        {
            Bucket b(bucketSize);
            b.loadBucket(file, bucketNumber);
            b.pushRecord(record);
            b.saveBucket(file, bucketNumber);
            ++bucketMap[bucketNumber];
            return bucketNumber;
        }

        ++index;
        bucketNumber = linearProbe(index, key, 1);
        if(bucketNumber == homeBucket)
            return -1;
    }
}


Record HashFile::retrive(int id)
{
    int index = 0;
    int homeBucket = linearProbe(index, id, 1);
    int bucketNumber = homeBucket;

    while(true)
    {
        Bucket b(bucketSize);
        b.loadBucket(file, bucketNumber, bucketMap[bucketNumber]);
        if(b.getRecord(id).getID() == id)
            return b.getRecord(id);

        if(bucketMap[bucketNumber] < bucketSize)
            return Record();


        ++index;
        bucketNumber = linearProbe(index, id, 1);
        if(bucketNumber == homeBucket)
            return Record();
    }
}

