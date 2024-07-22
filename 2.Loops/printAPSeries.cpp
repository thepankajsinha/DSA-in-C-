#include <iostream>
using namespace std;

void firstNSquares(int start, int diff, int num)
{
    int ans = start;
    for (int i = 1; i <= num; i++)
    {
        cout << ans <<endl;
        ans = ans + diff;
    }
}

int main()
{

    int start, diff, num;
    cout << "Enter first digit: ";
    cin >> start;

    cout << "Enter common difference: ";
    cin >> diff;

    cout << "Enter number of digit: ";
    cin >> num;

    firstNSquares(start, diff, num);
}