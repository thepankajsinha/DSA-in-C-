#include <iostream>
#include <string>
using namespace std;

//method 1
// void reverseNumber(int n)
// {
//     string reverseNumber;
//     while (n > 0)
//     {
//         int lastDigit = n % 10;
//         reverseNumber = reverseNumber + to_string(lastDigit);
//         n = n / 10;
//     }

//     cout << reverseNumber;
// }

//method 2
void reverseNumber(int n)
{
    int reverseNumber = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        reverseNumber = reverseNumber * 10 + lastDigit;
        n = n / 10;
    }

    cout << reverseNumber;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    reverseNumber(n);
}