#include <iostream>
using namespace std;

void floydTriangle(int n)
{
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
}

int main()
{
    cout << " Enter a number : ";
    int n;
    cin >> n;

    floydTriangle(n);
}