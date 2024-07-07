#include <iostream>
using namespace std;

void starPlus(int n){
    for (int i = 1; i <= n; i++)
    {
        int mid = n/2+1;
        for (int j = 1; j <= n; j++)
        {
            if (i == mid || j==mid) cout<<"*";
            else cout<<" ";
             
        }
        cout<<endl;
    }
    
}

int main()
{
    cout << " Enter a number : ";
    int n;
    cin >> n;

    starPlus(n);
}