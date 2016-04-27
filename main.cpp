#include <iostream>
#include "hash.h"

using namespace std;

int main(int argc, char *argv[])
{
    Hash h("C:/temp/test.hash", 1000, 3);

    if(h.isError())
        std::cout << "ERROR!!!!" << std::endl;

    return 0;
}
