//find kth smallest element using heap
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {10,20,-4,5,18,24,1,-7,56};
    int k = 4; //find 4th smallest element
    int n = sizeof(arr) / sizeof(arr[0]);

    priority_queue<int> maxHeap;
    for(int i = 0; i < n; i++){ //T.C- O(nlogk)
        //Build max heap
        maxHeap.push(arr[i]);
        //If size of heap becomes greater than k, remove the largest element
        if(maxHeap.size() > k) maxHeap.pop();
    }
    //The kth smallest element is the top element of max heap
    cout<<maxHeap.top()<<endl;
    //output- 5
}