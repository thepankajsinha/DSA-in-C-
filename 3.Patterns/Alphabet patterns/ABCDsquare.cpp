#include <iostream>
using namespace std;

void alphabetSquare(int n){
    for (int i = 0; i <= n; i++)
    {
        char ans = 'a' + i;
        for (int j = 0; j <= n; j++)
        {
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    
}

int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;

    alphabetSquare(n);
}