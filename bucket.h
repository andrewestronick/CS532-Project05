#ifndef BUCKET_H
#define BUCKET_H


class Bucket
{
public:

    Bucket(int r);
    ~Bucket();

private:

    int r;
    Record *records;
};

#endif // BUCKET_H
