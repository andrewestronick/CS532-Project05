#include "bucket.h"

Bucket::Bucket(int size) : _size(size)
{
    _recordArray = new Record[_size];
}


Bucket::~Bucket()
{
    delete _recordArray;
}


void Bucket::record(Record &record)
{
    if(_recordCount == _size)
        return;

    _recordArray[_recordCount].id(record.id());
    _recordArray[_recordCount].name(record.name());
    ++_recordCount;
}


Record Bucket::record(int index)
{
    return _recordArray[index];
}
