#ifndef HASHFILE_H
#define HASHFILE_H

#include <string>
#include <fstream>
#include "bucket.h"
#include "record.h"

class HashFile
{
public:

    HashFile(std::string fileName, int n, int bucketSize);
    ~HashFile();
    int linearProbe(int i, int key, int step);
    int store(Record record);
    Record retrive(int id);


private:

    int n;
    int bucketSize;
    std::string fileName;
    std::fstream file;
    int *bucketMap = nullptr;



};

#endif // HASHFILE_H
