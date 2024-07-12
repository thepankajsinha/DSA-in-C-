#include <iostream>
using namespace std;

int factorial(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }

    if (n == 0 || n == 1)
        return ans;
    else
        return ans;
}

void trailingZerosInFactorial(int n)
{
    int count = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        if(lastDigit==0) count++;
        n = n / 10;
    }
    cout<<count++;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int ans = factorial(n);
    trailingZerosInFactorial(ans);
}