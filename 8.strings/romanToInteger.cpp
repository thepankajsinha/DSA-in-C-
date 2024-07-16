#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// this function returns the int value of given individual roman number
int getValue(char ch)
{

    if (ch == 'I') return 1;
    else if (ch == 'V') return 5;
    else if (ch == 'X') return 10;
    else if (ch == 'L') return 50;
    else if (ch == 'C') return 100;
    else if (ch == 'D') return 500;
    else return 1000;
}

int romanToInteger(string s)
{
    int sum = 0;

    // traverse each character of given string
    for (int i = 0; i < s.size() - 1; i++)
    {

        if (getValue(s[i]) < getValue(s[i + 1]))
        {
            sum = sum - getValue(s[i]);
        }
        else
        {
            sum = sum + getValue(s[i]);
        }
    }

    //this is for adding last value of roman number
    sum = sum + getValue(s[s.size() - 1]);
    return sum;
}

int main()
{
    string s = "XLIII";
    cout << romanToInteger(s);
}