#include <iostream>
using namespace std;

int stairPath(int n)
{
    // base condition
    if ( n == 2 ) return 2;
    if ( n == 1 ) return 1;

    // recursive call
    return stairPath(n - 1) + stairPath(n -2); 
}

int main()
{

    int noOfStair = 5;

    cout << stairPath(noOfStair);
}