#include "bucket.h"

Bucket::Bucket(int r)
{
    size = r;
    recordArray = new Record[size];
}


Bucket::~Bucket()
{
    delete recordArray;
}


bool Bucket::put(Record &r)
{
    if(recordCount == size)
        return false;

    recordArray[recordCount].id = r.id;
    ::nameCopy(recordArray[recordCount].name, r.name, 20);

    ++recordCount;

    return true;
}


Record Bucket::get(int index)
{
    Record r;

    r.id = recordArray[index].id;
    ::nameCopy(r.name, recordArray[index].name, 20);

    return r;

}


void Bucket::load(char *stream)
{
    char *data = (char*) recordArray;
    for(int i = 0; i < sizeOf(); ++i)
        data[i] = stream[i];
}


char *Bucket::save()
{
    return (char*) recordArray;
}


int Bucket::sizeOf() const
{
        return sizeof(Record[size]);
}

