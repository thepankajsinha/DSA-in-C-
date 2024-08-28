#include <bits/stdc++.h>
using namespace std;

int maxNumOfStringPairs(string arr[], int n){ //T.C- O(n)

    //insert all the elements in the unsorted_set
    unordered_set<string> s;
    for(int i=0; i<n; i++){
        s.insert(arr[i]);
    }

    int count = 0;
    for(int i=0; i<n; i++){
        string rev = arr[i];
        reverse(rev.begin(), rev.end());
        if(rev == arr[i]) continue;
        if(s.find(rev)!= s.end()){
            count++;
            s.erase(arr[i]);
        }
    }
    return count;
    
}
int main(){
    string arr[5] = {"cd","ac","dc","ca","zz"};
    int n = sizeof(arr)/sizeof(arr[0]);
    int pairs = maxNumOfStringPairs(arr, n);
    cout<<pairs; //2
    return 0;
}