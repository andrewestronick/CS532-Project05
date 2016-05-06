#include "record.h"

Record::Record()
{

}


Record::Record(int id, std::string name) : _id(id)
{
    Record::name(name);
}


void Record::id(int id)
{
    this->_id = id;
}


int Record::id()
{
   return _id;
}


void Record::name(std::string name)
{
    for(unsigned i = 0; i < 20; ++i)
        _name[i] = (i < name.size()) ? name[i] : ' ';
}

std::string Record::name()
{
    return _name;
}
