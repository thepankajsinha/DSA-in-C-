#include <iostream>
using namespace std;

void print1ToN(int num, int N)
{
    if (num == N)  //base condition 
    {
        cout<< num << endl;
        return;
    }

    cout<< num << endl;  
    print1ToN(num + 1, N); //recursive call
}

int main()
{

    int num = 1;
    int N = 10;

    print1ToN(num, N);
}