#include <iostream>
using namespace std;

void invertedRightAngleTriangle(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    
}

int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;

    invertedRightAngleTriangle(n);
}