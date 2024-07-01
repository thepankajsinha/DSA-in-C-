#include <iostream>     
using namespace std;

int main(){

    int  n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];  //arrray declaration

    cout<<"Enter the elements: ";  //taking user input
    for (int i = 0; i < n; i++)    
    {
        cin>>arr[i];              //array initialization
    }

    cout<<"Array elements are: "<<endl;  //printing output
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}