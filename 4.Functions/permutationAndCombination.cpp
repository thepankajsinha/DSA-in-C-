#include <iostream>
using namespace std;

int factorial(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    
    if(n==0 || n==1) return 1;
    else return ans;
}

int combination(int n, int r){
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}

int permutation(int n, int r){
    int npr = factorial(n)/factorial(n-r);
    return npr;
}
int main()
{
    cout << "Enter n :";
    int n;
    cin >> n;

    cout << "Enter r :";
    int r;
    cin >> r;

    int ncr = combination(n, r);
    cout<<ncr<<endl;


    int npr = permutation(n, r);
    cout<<npr;
}