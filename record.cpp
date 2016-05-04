#include "record.h"

Record::Record()
{
}


Record::Record(int id, std::string name)
{
    this->id = id;
    std::size_t length = name.copy(this->name,20);
    if( length < 20)
        for(int i = length; i < 20; ++i)
            this->name[i] = ' ';
}


int Record::getID()
{
    return id;
}


std::string Record::getName()
{
    std::string name(this->name, 20);
    return name;
}


