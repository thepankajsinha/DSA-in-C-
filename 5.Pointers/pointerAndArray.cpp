#include <iostream>
using namespace std;

int main(){
    
    // Declare an array and initialize it with values
    int arr[] ={4, 8, 12, 16, 32, 64, 128};

    // Declare a pointer variable and assign the address of the array
    int *ptr = arr;

    // how to print element of array using pointer.
    for (int i = 0; i < 7; i++)
    {
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    
    //how to access and update array element using pointers
    ptr[0] = 10;

    for (int i = 0; i < 7; i++)
    {
        cout<<ptr[i]<<" ";
    }

}