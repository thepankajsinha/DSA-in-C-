#include <bits/stdc++.h>
using namespace std;

int countUniqueElements(int arr[], int n){ //T.C- O(n)
    unordered_set<int> s;
    for(int i=0; i<n; i++){
        s.insert(arr[i]);
    }
    return s.size();
}
int main(){
    int arr[10] = {1, 2, 1, 2, 4, 5, 5 ,6, 7, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int uniqueCount = countUniqueElements(arr, n);
    cout<<uniqueCount; //7
    return 0;
}