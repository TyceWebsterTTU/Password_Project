#include "Password_Project.h"
#include "Password_Strength_Checker.cpp"
#include "Password_Randomizer.cpp"

int main()
{
    int i = selectArray();
    int key = getKey();
    cout << i << endl << key << endl;
    
    string password = "";
    getline(cin, password);
    printStrongness(password);
    return 0;
}