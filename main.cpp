#include <iostream>
#include "hashfile.h"
#include "bucket.h"
#include "record.h"

int main(int argc, char *argv[])
{
    const std::string fileName = "C:\\temp\\purple.hash";

    HashFile h(7, 3, fileName);

    return 0;
}
