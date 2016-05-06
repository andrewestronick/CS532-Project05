#include "record.h"

Record::Record()
{
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
