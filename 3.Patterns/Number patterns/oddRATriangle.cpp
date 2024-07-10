#include <iostream>
using namespace std;

void oddRATriangle(int n){
    for (int i = 1; i <= n; i++)
    {
        int a =1;
        for (int j = 1; j <= i; j++)
        {
            cout<<a<<" ";
            a = a + 2;
        }
        cout<<endl;
    }
    
}

int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;

    oddRATriangle(n);
}