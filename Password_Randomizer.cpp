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

void generatePassword()
{
    string password = "";
    int length = 8;

    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string special = "!@#$%&";
    string number = "0123456789";

    int key;
    int count = 0;
    int count_alphabet = 0;
    int count_ALPHABET = 0;
    int count_special = 0;
    int count_number = 0;

    while (count < length)
    {
        int k = selectArray();
    }
}