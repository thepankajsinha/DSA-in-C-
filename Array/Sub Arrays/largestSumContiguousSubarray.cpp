#include <iostream>
#include <climits>
using namespace std;

void largestSumContiguousSubarray(int arr[], int n){
    int maxi = INT_MIN, prefix=0;

    for (int i = 0; i < n; i++)
    {
        prefix = prefix + arr[i];
        maxi = max(maxi, prefix);
        if (prefix < 0)
        {
           prefix = 0;
        }      
    }
    cout<<maxi;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    largestSumContiguousSubarray(arr,n);    
}