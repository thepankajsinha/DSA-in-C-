#include <bits/stdc++.h>
using namespace std;

int main(){
    //create a minHeap
    priority_queue<int, vector<int>, greater<int>> minHeap;

    //insert elements into the minHeap
    minHeap.push(10);  //T.C - O(logn)
    minHeap.push(5);
    minHeap.push(8);
    minHeap.push(3);
    minHeap.push(7);
    minHeap.push(20);

    //print the size of the heap
    cout<< minHeap.size() << endl;  //T.C - O(1)
    //Output- 6


    //return the top element
    //it always returns the minimum element
    cout<< minHeap.top() << endl;   //T.C - O(1)
    //Output- 3


    //remove the top element
    minHeap.pop(); //T.C - O(logn)


    //return the top element after removing the minimum element
    cout<< minHeap.top() << endl;
    //Output- 5
} 