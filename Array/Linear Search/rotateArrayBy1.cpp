//Rotate array by 1
#include <iostream>
#include <climits>
using namespace std;

void rotateArray(int arr[], int n){
    int lastElement= arr[n-1];

    for (int i = n-2; i >= 0; i--){
        
       arr[i+1] = arr[i];
    }

    arr[0] = lastElement;

    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    
}

int main(){

    int n;
    cout<<"Enter number of elements : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    

    rotateArray(arr,n);
}