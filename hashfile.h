#ifndef HASHFILE_H
#define HASHFILE_H

#include <string>
#include <fstream>
#include "bucket.h"
#include "record.h"

class HashFile
{
public:

    HashFile();
    ~HashFile();


private:

    int n;
    int r;
    std::string fileName;
    std::fstream file;
    int *bucketMap = nullptr;

    Bucket getBucket(int n);
    void putBucket(Bucket &b, int bucketNumber);


};

#endif // HASHFILE_H
