#include <iostream>
using namespace std;

void sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum = sum + lastDigit;
        n = n / 10;
    }

    cout << sum;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    sumOfDigits(n);
}