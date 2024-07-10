#include <iostream>
using namespace std;

void positiveNegative(int n){
    if (n == 0 )
    {
       cout<<"Zero";
    }
    else if (n > 0)
    {
        cout<<"Positive";
    }
    else{
        cout<<"Negative";
    }
    
    
}

int main(){
    int n;
    cin>>n;

    positiveNegative(n);
}