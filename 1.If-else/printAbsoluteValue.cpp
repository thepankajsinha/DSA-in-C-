#include <iostream>
using namespace std;

void printAbsoluteValue(int n){
    if (n > 0) cout<<n;
    else cout<<-n;
}

int main(){
    cout<<"Enter an integer: ";
    int n;
    cin>>n;

    printAbsoluteValue(n);
}