#include "hash.h"


Hash::Hash(const std::string fileName, int size, int bucketSize)
{
    file.open(fileName, std::fstream::in | std::fstream::out | std::fstream::binary | std::fstream::trunc);
    if(file.is_open())
    {
        error = false;
        this->size = size;
        this->bucketSize = bucketSize;

        bucketMap = new int[size];
        for(int i = 0; i < size; ++i)
            bucketMap[i] = 0;
    }
    else
        error = true;
}

Hash::~Hash()
{
    if(bucketMap != nullptr)
        delete bucketMap;
}

bool Hash::isError()
{
    return error;
}
