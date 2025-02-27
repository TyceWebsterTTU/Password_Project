#include "Password_Project.h"
#include "Password_Strength_Checker.cpp"
#include "Password_Randomizer.cpp"

int main()
{
    string password = "";
    getline(cin, password);
    printStrongness(password);
    return 0;
}