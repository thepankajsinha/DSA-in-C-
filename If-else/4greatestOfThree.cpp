#include <iostream>
using namespace std;

void greatestOfThree(int num1, int num2, int num3){
    if (num1 > num2 && num1 > num3)
    {
        cout<<num1<<" is largest number.";
    }
    else if (num2 > num3)
    {
        cout<<num2<<" is largest number.";
    }
    else{
        cout<<num3<<" is largest number.";
    }

}

int main(){
    cout<<"Enter three numbers : ";
    int num1, num2, num3;
    cin>>num1>>num2>>num3;

    greatestOfThree(num1, num2, num3);
}