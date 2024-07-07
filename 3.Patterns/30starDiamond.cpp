#include <iostream>
using namespace std;

void starDiamond(int n)
{
    //upper part
    for (int i = 1; i <= n; i++)
    {
        // print spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        //print star
        for (int k = 1; k <= 2*i-1; k++)
        {
            cout <<"*";
        }
        cout << endl;
    }

//lower part
     for (int i = n-1; i >= 1; i--)
    {
        // print spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        //print star
        for (int k = 1; k <= 2*i-1; k++)
        {
            cout <<"*";
        }
        cout << endl;
    }
    
}

int main()
{
    cout << " Enter a number : ";
    int n;
    cin >> n;

    starDiamond(n);
}