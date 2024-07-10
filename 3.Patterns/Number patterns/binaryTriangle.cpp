#include <iostream>
using namespace std;

void binaryTriangle(int n)
{
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        if(i%2==0) a = 0;
        else a = 1;

        for (int j = 1; j <= i; j++)
        {
            cout<<a<<" ";

            if(a==1) a=0;
            else a=1;
        }
        cout << endl;
    }
}

int main()
{
    cout << " Enter a number : ";
    int n;
    cin >> n;

    binaryTriangle(n);
}