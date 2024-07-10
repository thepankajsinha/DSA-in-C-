#include <iostream>
using namespace std;

void factorial(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    
    if(n==0 || n==1) cout<<1;
    else cout<<ans;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    factorial(n);
}