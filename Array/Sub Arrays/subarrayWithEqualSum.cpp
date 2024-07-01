#include <iostream>
using namespace std;

void subarrayWithEqualSum(int arr[], int n){
    int sum = 0, ans=0, prefix=0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    prefix = 0;
    for (int i = 0; i < n-1; i++)
    {
        prefix = prefix + arr[i];

        ans = sum - prefix;
        if (ans == prefix)
        {
            cout<<1;
            break;
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

    subarrayWithEqualSum(arr,n);    
}