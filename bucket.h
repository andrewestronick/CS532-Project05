#ifndef BUCKET_H
#define BUCKET_H

#include <fstream>
#include "record.h"

class Bucket
{
public:

    Bucket(int size);
    ~Bucket();
    void pushRecord(Record record);
    void popRecord(void);
    Record getRecord(int id);
    bool isFull(void);
    void loadBucket(std::fstream &file, int bucketNumber);
    void saveBucket(std::fstream &file, int bucketNumber);

private:

    int size;
    int recordCount = 0;
    Record *recordArray;

    int bucketSize(void);

};

#endif // BUCKET_H
