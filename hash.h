#ifndef HASH_H
#define HASH_H

#include <string>
#include <fstream>

class Hash
{
public:

    Hash(const std::string fileName, int size, int bucketSize);
    ~Hash();
    bool isError(void);

private:

    int size;
    int *bucketMap = nullptr;
    int bucketSize;
    bool error;
    std::fstream file;
};

#endif // HASH_H
