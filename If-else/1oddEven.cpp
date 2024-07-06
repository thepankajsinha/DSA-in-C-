#include <iostream>
using namespace std;

void oddEven(int n)
{
    if (n % 2 == 0)
    {
        cout << "Even number";
    }
    else
    {
        cout << "Odd number";
    }
}

int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;

    oddEven(n);
}