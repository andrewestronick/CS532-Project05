#ifndef RECORD_H
#define RECORD_H
#include <string>
#include <iostream>

class Record
{
public:

    Record();
    Record(int id, std::string name);
    void setID(int id);
    int getID(void);
    void setName(std::string name);
    std::string getName(void);
    void print(void);

private:

    int id = 0;
    char name[20];

};

#endif // RECORD_H
