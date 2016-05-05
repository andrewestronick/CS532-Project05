#ifndef HASHFILE_H
#define HASHFILE_H

#include <string>
#include <fstream>
#include "bucket.h"
#include "record.h"

class HashFile
{
public:

    HashFile(int n, int r, const std::string &fileName);
    ~HashFile();
    int store (Record data_rec);
    Record retrieve (int id);

private:

    int n;
    int r;
    std::string fileName;
    std::fstream file;
    int *bucketMap = nullptr;

    Bucket getBucket(int n);
    void putBucket(const Bucket &b, int bucketNumber);


};

#endif // HASHFILE_H
