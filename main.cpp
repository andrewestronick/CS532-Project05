#include <iostream>
#include "hash.h"
#include "record.h"

using namespace std;

int main(int argc, char *argv[])
{
    /*
    Hash h("C:/temp/test.hash", 1000, 3);

    if(h.isError())
        std::cout << "ERROR!!!!" << std::endl;
    */

    Record r(7, "Andrew is awesome, and Lori is  poohead");
    std::cout << r.getName() << std::endl;

    return 0;
}
