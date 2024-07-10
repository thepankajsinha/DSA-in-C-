#include <iostream>
using namespace std;

void numberSquareRow(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
}

void numberSquareCol(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}

int main()
{
    cout << "Enter a number : ";
    int n;
    cin >> n;

    numberSquareCol(n);
}