#include <bits/stdc++.h>
using namespace std;

int zeroSumSubarray(vector<int> &arr, int n){
    int total = 0;
    unordered_map<int, int> mp;
    int prefixSum = 0;
    mp[0] = 1;

    for (int i = 0; i < n; i++){
        prefixSum += arr[i];
        if(mp.count(prefixSum)){
            total += mp[prefixSum];
            mp[prefixSum]++;
        }
        else{
            mp[prefixSum] = 1;
        }
    }
    return total;
}
int main(){
    vector<int> arr ={6,-1,-3,4,-2,2,4,6,-12,-2};
    int n = arr.size();
    cout<<zeroSumSubarray(arr, n);
}