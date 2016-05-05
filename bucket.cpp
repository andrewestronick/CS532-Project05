#include "bucket.h"

Bucket::Bucket(int r)
{
    this->r =r;
    records = new Record[this->r];
}


Bucket::~Bucket()
{
    delete records;
}


char *Bucket::stream() const
{
    return (char*) &records;
}


int Bucket::size() const
{
    return sizeof(Record[r]);
}

