#include "hashfile.h"


HashFile::HashFile(int n, int r, const std::string &fileName)
{
    file.open(fileName, std::fstream::in | std::fstream::out | std::fstream::binary | std::fstream::trunc);
    if(!file.is_open())
        exit(EXIT_FAILURE);

    this->n = n;
    this->r = r; 

    bucketMap = new int[n];
        for(int i = 0; i < n; ++i)
            bucketMap[i] = 0;
}


HashFile::~HashFile()
{
    file.close();
    delete bucketMap;
}


int HashFile::store(Record data_rec)
{

}


Record HashFile::retrieve(int id)
{

}

Bucket HashFile::getBucket(int n)
{

}

void HashFile::putBucket(Bucket &b, int bucketNumber)
{
    int size = b.sizeOf();
    file.seekp(bucketNumber * size);

    file.write(b.save(), size);
}
