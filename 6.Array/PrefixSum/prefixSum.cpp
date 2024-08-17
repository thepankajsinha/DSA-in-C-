#include <bits/stdc++.h>
using namespace std;

void prefixSum(vector<int> arr){
    int n = arr.size();
    
    for (int i = 1; i < n; i++){
        arr[i] += arr[i-1];
    }
    
    for (int i = 0; i < n; i++){
        cout << arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> arr = {5,10,15,20,25};

    prefixSum(arr);

    // Output: Prefix Sums: 5 15 30 50 75
}