#include <iostream>
using namespace std;

void sumOfNaturalNumber(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout<<sum;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin>>n;

    sumOfNaturalNumber(n);
}