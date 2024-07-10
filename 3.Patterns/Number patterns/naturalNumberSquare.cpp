#include <iostream>
using namespace std;

void naturalNumberSquare(int n){

    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    
}

int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;

    naturalNumberSquare(n);
}