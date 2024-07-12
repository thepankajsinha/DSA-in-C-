#include <iostream>
using namespace std;

//swap two number using temp variable
void swapTwoNumber1 (int &a, int &b){

    int temp;
    temp = a;
    a = b;
    b = temp;

}

//swap two numbr without using temp variable
void swapTwoNumber2 (int &a, int &b){

    a = a + b;
    b = a - b;
    a = a - b;

}

int main(){
    cout<<"Enter two numbers; ";
    int a, b;
    cin>>a>>b;

    swapTwoNumber2(a, b);
    cout<<a<<" "<<b;
}