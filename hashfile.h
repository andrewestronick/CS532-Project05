#ifndef HASHFILE_H
#define HASHFILE_H

#include <string>
#include <fstream>
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

    bucket getBucket(int n);
    void putBucket(const bucket &b, int n);


};

#endif // HASHFILE_H
