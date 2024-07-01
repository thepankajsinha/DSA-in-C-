#include <iostream>
using namespace std;

void pairWithGivenDIff(int arr[], int n, int target){
    int start =0, end =n-1;

    while (start<=end)
    {
        if (arr[end] - arr[start] == target)
        {
            cout<<arr[start]<<" "<<arr[end];
            break;
        }
        else if (arr[end] - arr[start] < target)
        {
            start++;
        }
        else if (arr[end] - arr[start] > target)
        {
            end--;
        } 
    }   
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int target;

    cin>>target;
    pairWithGivenDIff(arr,n,target);    
}