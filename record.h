#ifndef RECORD_H
#define RECORD_H
#include <string>

class Record
{
public:

    Record();
    Record(int id, std::string name);
    std::string getName(void);

private:

    int id = 0;
    char name[20];

};

#endif // RECORD_H
