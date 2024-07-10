#include <iostream>
using namespace std;

void nthFibonacciNumber(int n)
{
    int first = 0;
    int second = 1;
    int ans = 0;

    if (n == 0 || n == 1){
        cout << n <<" fibonacci number is "<<n;
    }

    else
    {
        for (int i = 1; i < n-1; i++)
        {

            ans = first + second;
            first = second;
            second = ans;
        }
        cout << n <<" fibonacci number is "<<ans;
    }

}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    nthFibonacciNumber(n);
}