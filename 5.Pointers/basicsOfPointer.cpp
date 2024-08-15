// Pointer is a variable that is used to store the address of another variable

#include <iostream>
using namespace std;

int main(){

    int num = 10;

    // "&" -> address of operator
    //It returns address of a variable
    cout <<&num<<endl;
    //output: 0x61ff08

    
    //here "ptr" is a pointer variable which store the address of int data type variable num
    int *ptr;    //Pointer declaration
    ptr = &num;  //pointer initialization
    cout<<ptr<<endl;
    //output: 0x61ff08

    
    // "*" -> dereference operator
    //It is used to access and modify the value which is pointed by pointer variable
    *ptr = 50;
    cout << *ptr<<endl;
    //output: 50


    //References variable (alias) -> It gives the alternate name to an existing variable

    int a = 10;
    int &b = a; //reference declaration
    cout << a <<endl;
    cout << b <<endl;


    //how to store the address of another pointer variable
    int **ptr2 = &ptr;
    cout<<*ptr2<<endl;
    //output: 0x61ff08


    
}