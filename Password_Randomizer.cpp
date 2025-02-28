#include "Password_Project.h"

int selectArray()
{
    srand(time(NULL));

    int i = rand() % 5;
    if (i == 0)
    {
        i++;
    }

    return i;
}

int getKey()
{
    srand(time(NULL));

    int key = rand() % 26;

    return key;
}