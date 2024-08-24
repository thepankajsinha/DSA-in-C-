#include <bits/stdc++.h>
using namespace std;

int printSubarrays(vector<int> &arr)
{
   int n = arr.size();
   for (int i = 0; i < n; i++){
    for (int k = i; k < n; k++){
        for (int j = i; j <= k; j++){
            cout<<arr[j];
        }
        cout<<endl;
    }
    
   }
   
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    printSubarrays(arr);
}