#include <bits/stdc++.h>
using namespace std;

void armstrongNumber(int n)
{
    int sum = 0;
    int realNumber = n;
    while (n > 0)
    {
        int lastDigit = n%10;
        int cube = lastDigit * lastDigit * lastDigit;
        n = n/10;
        sum = sum + cube;

    }
    if(sum==realNumber) cout<<"Armstrong number";
    else cout<<"This is not a armstrong number.";
}

int main()
{
    cout << "Enter a number:";
    int n;
    cin >> n;

    armstrongNumber(n);
}