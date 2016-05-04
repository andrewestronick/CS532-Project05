#include <iostream>
#include "hashfile.h"
#include "bucket.h"
#include "record.h"

int main(int argc, char *argv[])
{
    const std::string fileName = "C:\\temp\\purple.hash";

    HashFile h(7, 3, fileName);

    Record r(7, "Andrew is awesome, and Lori is  poohead");
    std::cout << r.getName() << std::endl;

    return 0;
}
