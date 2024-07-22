#include <bits/stdc++.h>
using namespace std;

void leapYear(int year)
{

    if (year % 400 == 0)
    {
        cout << "It is a leap year";
    }
    else if (year % 100 == 0)
    {
        cout << "It is not a leap year";
    }
    else if (year % 4 == 0)
    {
        cout << "It is a leap year";
    }
    else{
        cout << "It is not a leap year";
    }
}

int main()
{

    int year;
    cout << "Enter a year: ";
    cin >> year;

    leapYear(year);
}