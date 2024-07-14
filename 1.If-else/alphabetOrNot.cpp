#include <iostream>
using namespace std;

void alphabetOrNot(int ch)
{
    int ASCII_Value = (int)ch;

    if (ASCII_Value >= 97 && ASCII_Value <= 122)
    {
        cout << "Lowercase alphabet.";
    }
    
    else if (ASCII_Value >= 65 && ASCII_Value <= 90)
    {
        cout << "Uppercase alphabet.";
    }
    else{
        cout<<"Not an alphabet.";
    }
}

int main()
{
    cout << "Enter a character: ";
    char ch;
    cin >> ch;

    alphabetOrNot(ch);
}