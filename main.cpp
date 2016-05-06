#include <iostream>
#include <cstring>
#include "hashfile.h"
#include "bucket.h"
#include "record.h"

int main(int argc, char *argv[])
{
    const std::string fileName = "C:\\temp\\purple.hash";
    HashFile h(fileName,7, 3);

    h.store(Record(1, "Andrew"));
    h.store(Record(2, "Lori"));

    std::cout << h.retrive(1).getName();

    return 0;
}
