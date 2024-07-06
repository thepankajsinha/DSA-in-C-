#include <iostream>
using namespace std;

void power(int base, int exponent)
{
    int power = 1;
    for (int i = 0; i < exponent; i++)
    {
        power = power * base;
    }
    cout<<power;
}

int main()
{
    int base;
    cout << "Enter base: ";
    cin>>base;

    int exponent;
    cout << "Enter exponent: ";
    cin >> exponent;

    power(base, exponent);
}