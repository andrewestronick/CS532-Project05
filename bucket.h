#ifndef BUCKET_H
#define BUCKET_H

#include "record.h"

class Bucket
{
public:

    Bucket(int size);
    ~Bucket();
    void record(Record &record);
    Record record(int index);

private:

    int _size;
    int _recordCount = 0;
    Record *_recordArray;

};

#endif // BUCKET_H
