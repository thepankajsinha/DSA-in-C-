#include <iostream>
using namespace std;

int sumFrom1ToN(int n)
{
    if (n == 0)  return 1;

    return n + sumFrom1ToN(n - 1);
}

int main()
{
    int n = 10;
    cout << sumFrom1ToN(n);
}