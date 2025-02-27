#include "Password_Project.h"

void printStrongness(string &password)
{
    int n = password.length();
    //cout << n;

    bool hasLower = false;
    bool hasUpper = false;
    bool hasDigit = false;
    bool hasSpecial = false;

    string normalChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
    //cout << normalChars;

    for (int i = 0; i < n; i++)
    {
        if (islower(password[i]))
            hasLower = true;
        else if (isupper(password[i]))
            hasUpper = true;
        else if (isdigit(password[i]))
            hasDigit = true;
            
        size_t special = password.find_first_not_of(normalChars);
        if (special != string::npos)
            hasSpecial = true;
    }

    cout << "Strength of password: ";

    if (hasLower && hasUpper && hasDigit && hasSpecial && (n >=8))
        cout << "Strong" << endl;
    else if ((hasLower || hasUpper) && hasSpecial && (n >= 6))
        cout << "Moderate" << endl;
    else
        cout << "Weak" << endl;
}

