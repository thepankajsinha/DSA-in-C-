#include <iostream>
using namespace std;

void divisibleBy5Or3Not15(int n)
{
    if (n % 5 == 0 || n % 3 == 0)
    {
        if (n % 15 != 0)
        {
            cout << "The number is divisible by 5 or 3 but not 15.";
        }
        else
        {
            cout << "The number is divisible by 5 or 3 and 15.";
        }
    }
}

int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;

    divisibleBy5Or3Not15(n);
}