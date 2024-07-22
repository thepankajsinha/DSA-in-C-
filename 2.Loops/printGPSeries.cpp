#include <bits/stdc++.h>
using namespace std;

void printGPSeries(int start, int ratio, int num)
{

    for (int i = 0; i < num; i++)
    {
        cout<< start * pow(ratio, i) <<endl;
    }
}

int main()
{

    int start, ratio, num;
    cout << "Enter first digit: ";
    cin >> start;

    cout << "Enter common ratio: ";
    cin >> ratio;

    cout << "Enter number of digit: ";
    cin >> num;

    printGPSeries(start, ratio, num);
}