#include <iostream>
#include <climits>
using namespace std;

int missingNumber(int arr[], int n){
    
    //sum of all elemenmts in an array
    int sum = 0;
    for (int i = 0; i < n-1; i++){
        sum = sum + arr[i];
    }
    
    //sum of first n numbers
    int ans = (n*(n+1))/2;

    return ans - sum;

}

int main(){
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n-1; i++){
        cin >> arr[i];
    }
    
    int missNo = missingNumber(arr, n);

    cout<< "Missing Number is: " <<missNo<< endl;
}