#include "bucket.h"

Bucket::Bucket(int size)
{
    this->size = size;
    recordArray = new Record[this->size];
}


Bucket::~Bucket()
{
    delete recordArray;
}


void Bucket::pushRecord(Record record)
{
    if(isFull())
        return;

    recordArray[recordCount].setID(record.getID());
    recordArray[recordCount].setName(record.getName());
    ++recordCount;
}


void Bucket::popRecord()
{
    --recordCount;
}


Record Bucket::getRecord(int id)
{
    for(int i = 0; i < recordCount; ++i)
        if(recordArray[i].getID() == id)
            return recordArray[i];

    return Record();
}


bool Bucket::isFull()
{
    return (recordCount == size);
}


void Bucket::loadBucket(std::fstream &file, int bucketNumber)
{
    file.seekg(bucketSize() * bucketNumber);
    file.read((char *) recordArray, bucketSize());
    for(int i = 0; i < size; ++i)
        recordCount += (recordArray[i].getID() != 0) ? 1 : 0;
}


void Bucket::loadBucket(std::fstream &file, int bucketNumber, int recordCount)
{
    file.seekg(bucketSize() * bucketNumber);
    file.read((char *) recordArray, bucketSize());
    this->recordCount = recordCount;
}


void Bucket::saveBucket(std::fstream &file, int bucketNumber)
{
    file.seekp(bucketSize() * bucketNumber);
    file.write((char *) recordArray, bucketSize());
}

void Bucket::print()
{
    std::cout << "Number of records:" << recordCount << std::endl;
    for(int i = 0; i < recordCount; ++i)
        recordArray[i].print();
}


int Bucket::bucketSize()
{
    return sizeof(Record) * size;
}
