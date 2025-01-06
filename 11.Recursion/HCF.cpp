#include <iostream>
using namespace std;

int HCF(int a, int b){
    if (a==0)  return b;

    else return HCF(b%a, a);
}

int main()
{
    int a = 27;
    int b = 45;
    cout<<HCF(a,b);
}