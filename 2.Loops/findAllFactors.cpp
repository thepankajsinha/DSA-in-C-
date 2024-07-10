#include <iostream>
using namespace std;

void findAllFactors(int n){
    int i = 1;
    while (i<=n)
    {
        if (n%i==0)
        {
            cout<<i<<" ";
        }
        i++;  
    }
    
}

int main (){
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    findAllFactors(n);
}