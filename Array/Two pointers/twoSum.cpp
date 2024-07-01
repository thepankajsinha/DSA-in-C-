#include <iostream>
using namespace std;

void twoSum(int arr[], int n, int target){
    int start =0, end =n-1;

    while (start<=end)
    {
        if (arr[start] + arr[end]== target)
        {
            cout<<arr[start]<<" "<<arr[end];
            break;
        }
        else if (arr[start] + arr[end] > target)
        {
            end--;
        }
        else if (arr[start] + arr[end] < target)
        {
            start++;
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
    twoSum(arr,n,target);    
}