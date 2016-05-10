#include "record.h"

Record::Record()
{
    for(int i = 0; i < 20; ++i)
        name[i] = ' ';
}


Record::Record(int id, std::string name)
{
    setID(id);
    setName(name);
}


void Record::setID(int id)
{
    this->id = id;
}


int Record::getID(void)
{
   return id;
}


void Record::setName(std::string name)
{
    for(unsigned i = 0; i < 20; ++i)
        this->name[i] = (i < name.size()) ? name[i] : ' ';
}

std::string Record::getName()
{
    std::string s;

    for(unsigned i = 0; i < 20; ++i)
        s += name[i];

    return s;
}

void Record::print()
{
    std::cout << "ID:" << id << " Name:";
    for(int i = 0; i < 20; ++i)
        std::cout << name[i];
    std::cout << std::endl;
}
