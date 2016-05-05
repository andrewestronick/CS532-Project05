#ifndef BUCKET_H
#define BUCKET_H

#include "record.h"

class Bucket
{
public:

    Bucket(int r);
    ~Bucket();
    char *stream(void) const;
    int size(void) const;

private:

    int r;
    Record *records;
};

#endif // BUCKET_H
