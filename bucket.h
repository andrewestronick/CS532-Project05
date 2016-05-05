#ifndef BUCKET_H
#define BUCKET_H

#include "record.h"

class Bucket
{
public:

    Bucket(int r);
    ~Bucket();
    bool put(Record &r);
    Record get(int index);
    void load(char *stream);
    char* save(void);
    int sizeOf(void) const;

private:

    int size;
    int recordCount = 0;
    Record *recordArray;

};

#endif // BUCKET_H
