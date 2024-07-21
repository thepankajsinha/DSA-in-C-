#include <iostream>
using namespace std;

int power(int base, int pow)
{
    if (pow == 1) 
    {
        return base;
    }
    int ans = base * power(base, pow-1);
    return ans;
}

int main()
{
    int base = 5;
    int pow = 3;

    cout << power(base, pow);
}