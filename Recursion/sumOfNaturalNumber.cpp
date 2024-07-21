#include <iostream>
using namespace std;

int sumOfNaturalNumber(int n)
{
    if (n == 0) 
    {
        return 1;
    }
    int ans = n + sumOfNaturalNumber(n - 1);
    return ans;
}

int main()
{
    int n = 10;
    cout << sumOfNaturalNumber(n);
}