#include <iostream>
using namespace std;

void checkPrimeNumber(int n)
{
    //condition for checking 1 and 2
    if (n==2) cout << n << " is a prime number.";
    else if(n==1) cout << n << " is neither prime nor composite number.";

    //condition for checking number more than 2
    
    for (int i = 2; i < n - 1; i++)
    {
        if (n % i == 0)
        {
            cout << n << " is a composite number.";
            break;
        }
        else
        {
            cout << n << " is a prime number.";
            break;
        }
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    checkPrimeNumber(n);
}