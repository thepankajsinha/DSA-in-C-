#include <iostream>     
using namespace std;

void selectionSort(int arr[], int n){
    for (int i = 0; i < n; i++){

      int index = i;
      
      for (int j= i + 1; j <= n; j++)
      {
         if (arr[j] < arr[index]){
            index = j;
            }         
      }
      swap(arr[i], arr[index]);
    } 

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
      
}

int main(){

    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array:";
    for (int  i = 0; i < n; i++){
        cin>>arr[i];
    }

    selectionSort(arr, n);
    
}