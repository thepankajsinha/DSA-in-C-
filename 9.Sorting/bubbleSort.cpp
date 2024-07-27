#include <iostream>     
using namespace std;

void bubbleSort(int arr[], int n){

    for (int i = 0; i < n-1; i++){ 
      for (int j= 0; j <= n-1-i; j++){
         if (arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
         }         
      }
    } 

    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
      
}

void optimisedBubbleSort(int arr[], int n){

    for (int i = 0; i < n-1; i++){ 

        bool flag = true; 
      for (int j= 0; j <= n-1-i; j++){
         if (arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
            flag = false;
         }         
      }
      //if there is no swapping, then this loop will break
      //that means array is already sorted
      if(flag == true) break;
    } 

    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
      
}


int main(){

    int n = 5;
    int arr[n] = {5,4,3,2,1,};
    optimisedBubbleSort(arr, n);
    
}