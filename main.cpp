#include <iostream>
#include <cstring>
#include "hashfile.h"
#include "bucket.h"
#include "record.h"

int main(int argc, char *argv[])
{
    const std::string fileName = "C:\\temp\\purple.hash";

    HashFile h(7, 3, fileName);

    Record r;

    r.id = 3;
    nameCopy(r.name, "Andrew", 6);

    Bucket b(3);
    b.put(r);

    Record g = b.get(1);

    class rec
    {
    public:
        int id;
        char name[20];

        int getID(void)
        {
            return id;
        }

    };

    rec thing;

    class bk
    {
    public:
        rec rs[3];
    };

    std::cout << sizeof(thing) << " " << sizeof(bk);

    return 0;
}
