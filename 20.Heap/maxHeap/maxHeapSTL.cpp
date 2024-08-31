#include <bits/stdc++.h>
using namespace std;

int main(){
    //create a maxHeap
    priority_queue<int> maxHeap;

    //insert elements into the max heap
    maxHeap.push(10);  //T.C - O(logn)
    maxHeap.push(5);
    maxHeap.push(8);
    maxHeap.push(3);
    maxHeap.push(7);
    maxHeap.push(20);

    //print the size of the heap
    cout<< maxHeap.size() << endl;  //T.C - O(1)
    //Output- 6


    //return the top element
    //it always returns the maximum element
    cout<< maxHeap.top() << endl;   //T.C - O(1)
    //Output- 20


    //remove the top element
    maxHeap.pop(); //T.C - O(logn)


    //return the top element after removing the maximum element
    cout<< maxHeap.top() << endl;
    //Output- 20
} 