#include <iostream>
#include <string>
#include "hashfile.h"
#include "bucket.h"
#include "record.h"

int main(int argc, char *argv[])
{
    const std::string fileName = "C:\\temp\\purple.hash";
    HashFile h(fileName,7, 2);

    while(true)
    {
       int id;
       std::cout << "Enter ID:";
       std::cin >> id;
       if(0 == id)
           break;

       std::string name;
       std::cout << "Enter name:";
       std::cin >> name;

       Record r(id, name);
       int bucket = h.store(r);

       std::cout << "Bucket:" << bucket <<"  ID:" << id << "  Name:" << name << std::endl;
    }

    while(true)
    {
        int id;
        std::cout << "Enter ID:";
        std::cin >> id;
        if(0 == id)
            break;

        Record r = h.retrive(id);

        if(r.getID() != 0)
            r.print();
        else
            std::cout << "Not Found" << std::endl;
    }

    return 0;
}
