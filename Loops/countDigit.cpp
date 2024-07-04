#include <iostream>
using namespace std;

void countDigit(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }

    if (n == 0) cout << 1;
    else cout << count;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    countDigit(n);
}