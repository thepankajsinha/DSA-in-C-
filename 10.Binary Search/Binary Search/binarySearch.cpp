#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &v, int key){  //T.C - O(logn)
    int start = 0;
    int end = v.size()-1;
    
    while (start <= end){
        int mid = (start + end)/2;

        if (v[mid]==key){
            return mid;
        }
        else if (v[mid] < key){
            start = mid + 1;
        }
        else if (v[mid] > key){
            end = mid - 1;
        }  
    }
    return -1;    
}

int main(){
    
    int size;
    cout << "Enter size: ";
    cin >> size;

    vector<int> v(size);
    cout << "Enter array elements: ";

    for (int i = 0; i < v.size(); i++){
        cin >> v[i];
    }

    int key;
    cout<<"Enter key element: ";
    cin>>key;

    int ans = binarySearch(v, key);

    if (ans >= 0){
        cout<<"Element found at "<<ans<<" index";
    }
    else{
        cout<<"Element not found";
    }
    
}