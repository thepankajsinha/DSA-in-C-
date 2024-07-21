#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1) // base condition
    {
        return 1;
    }

    int ans = n * factorial(n - 1); // recursive call
    return ans; 
}

int main()
{

    int n = 5;

    cout << factorial(n);
}