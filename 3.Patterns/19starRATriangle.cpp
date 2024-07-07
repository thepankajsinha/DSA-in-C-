//RA= right angle
#include <iostream>
using namespace std;

void starRightAngleTriangle(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
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

    starRightAngleTriangle(n);
}