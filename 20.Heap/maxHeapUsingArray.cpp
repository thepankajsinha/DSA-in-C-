//Max heap implementation using array

#include <bits/stdc++.h>
using namespace std;

class MaxHeap{
    public:
    int* arr;
    int heapSize; //number of elements in heap
    int arraySize; //size of array

    MaxHeap(int n){
        arr = new int[n];
        heapSize = 0;
        arraySize = n;
    }

    void push(int val){  //T.C- O(logn)
        if(heapSize == arraySize){
            cout << "Heap is full." << endl;
            return;
        }
        //add new element into heap
        arr[heapSize] = val;
        int index = heapSize;
        heapSize++;

        //parentIndex = (index-1)/2
        //parentNode =  arr[(index - 1)/2]
        //childIndex = index
        //childNode = arr[index]

        //satisfy the heap properties
        while(index > 0 && arr[(index - 1)/2] < arr[index]){
            swap(arr[(index - 1)/2], arr[index]);
            index = (index - 1)/2;
        }
    }

    void Heapify(int index){
        //largest will store the index of the element which is greater between parent, left, right child
        int largest = index; 
        int left = 2*index + 1;
        int right = 2*index + 2;
        
        //if left child is larger than parent
        if(left < heapSize && arr[left] > arr[largest])
            largest = left;
            
        //if right child is larger than largest so far
        if(right < heapSize && arr[right] > arr[largest])
            largest = right;
            
        //if largest is not parent, swap them and heapify the child
        if(largest!= index){
            swap(arr[index], arr[largest]);
            Heapify(largest);
        }
        
    }
    void pop(){  //T.C- O(logn)
        if(heapSize == 0){
            cout << "Heap is empty." << endl;
            return;
        }
        //delete from heap
        //replace first element of array with last element
        arr[0] = arr[heapSize-1];
        heapSize--;

        if(heapSize==0) return;

        Heapify(0);
    }

    int top(){
        if(heapSize == 0){
            cout << "Heap is empty." << endl;
            return -1;
        }
        return arr[0];
    }
    void display(){
        for(int i=0; i<heapSize; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};
int main(){
    MaxHeap heap(5);
    heap.push(5);
    heap.push(10);
    heap.push(15);
    heap.push(20);
    heap.push(25);
    heap.display(); // Output: 25 20 15 10 5
    heap.pop();
    heap.display(); // Output: 20 15 10 5
    heap.pop();
    heap.display(); // Output: 15 5 10
    cout<<heap.top(); //15
}