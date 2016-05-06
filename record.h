#ifndef RECORD_H
#define RECORD_H
#include <string>

class Record
{
public:

    Record();
    Record(int id, std::string name);
    void id(int id);
    int id(void);
    void name(std::string name);
    std::string name(void);

private:

    int _id=0;
    char _name[20];

};

#endif // RECORD_H
