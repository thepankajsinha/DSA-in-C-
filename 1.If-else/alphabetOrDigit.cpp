#include <iostream>
using namespace std;

void alphabetOrDigit(int ch)
{

    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' )
    {
        cout << "It is an alphabet";
    }
    
    else if (ch >= '0' && ch <= '9')
    {
        cout << "It is a degit.";
    }
    else{
        cout<<"It is a special Character.";
    }
}

int main()
{
    cout << "Enter a character: ";
    char ch;
    cin >> ch;

    alphabetOrDigit(ch);
}