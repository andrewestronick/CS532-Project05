#ifndef RECORD_H
#define RECORD_H

struct Record
{
    int id;
    char name[20];
};

static void nameCopy(char *destinationName, char *sourceName, int length )
{
    for(int i = 0; i < 20; ++i)
        destinationName[i] = ' ';

    for(int i = 0; i < (length <= 20 ? length : 20); ++i)
        destinationName[i] = sourceName[i];
}

#endif // RECORD_H
