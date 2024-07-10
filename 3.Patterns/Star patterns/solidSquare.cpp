#include <iostream>
using namespace std;

void solidSquare(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    
}

int main()
{
    cout << "Enter no. of row or col : ";
    int n;
    cin >> n;

    solidSquare(n);
}