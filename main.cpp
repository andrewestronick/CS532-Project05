#include <iostream>
#include <cstring>
#include "hashfile.h"
#include "bucket.h"
#include "record.h"

int main(int argc, char *argv[])
{
    const std::string fileName = "C:\\temp\\purple.hash";

    Bucket b(3);
    Record r1(1, "Andrew");

    b.record(Record::Record());

    return 0;
}
