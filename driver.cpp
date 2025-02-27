#include "Password_Project.h"
#include "Password_Strength_Checker.cpp"
#include "Password_Randomizer.cpp"

int main()
{
    string pass = "";
    getline(cin, pass);
    printStrongness(pass);
    return 0;
}