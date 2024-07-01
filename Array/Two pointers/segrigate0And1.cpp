#include <iostream>
using namespace std;

void segrigate0And1(int arr[], int n){
    int start =0, end =n-1;

    while (start<=end)
    {
        if (arr[start]== 1 && arr[end]==0)
        {
            swap(arr[start], arr[end]);
        }
        else if (arr[start]==0)
        {
            start++;
        }
        else if (arr[end]==1)
        {
            end--;
        } 
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }    
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    segrigate0And1(arr,n);    
}