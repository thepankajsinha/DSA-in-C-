// Min heap implementation using array
#include <bits/stdc++.h>
using namespace std;

class MinHeap{
public:
    int arr[100];
    int size = 0;

    void push(int val){ // T.C - O(logn)

        // insert element in array
        size++;
        int i = size;
        arr[i] = val;

        // satisfy the maxheap property
        while (i > 1){
            int parentIndex = i / 2;
            if (arr[parentIndex] > arr[i]){
                swap(arr[parentIndex], arr[i]);
                i = parentIndex;
            }
            else break;
        }
    }

    void pop() {  // T.C - O(logn)
    if (size == 0){
        cout << "Heap is empty!" << endl;
        return;
    }

    // Swap root with last element
    swap(arr[1], arr[size]);
    size--;

    // Satisfy minheap property
    int i = 1;
    while (i <= size) {
        int left = 2 * i; //leftChildIndex
        int right = 2 * i + 1;  //rightChildIndex

        // Find the smallest among parent, left child, and right child
        int smallest = i;
        if (left <= size && arr[left] < arr[smallest]) {
            smallest = left;
        }
        if (right <= size && arr[right] < arr[smallest]) {
            smallest = right;
        }

        if (smallest > i) {
            swap(arr[i], arr[smallest]);
            i = smallest;
        } else {
            break;  // Heap property is satisfied
        }
    }
}


    int top(){ // T.C - O(1)
        if (size == 0){
            cout << "Heap is empty!" << endl;
            return-1;
        }
        return arr[1]; // return root element
    }


    void print(){  //T.C - O(n)
        for (int i = 1; i <= size; i++){
                cout << arr[i] << " ";
        }
                cout << endl;
    }
            
};

    int main(){
        MinHeap heap;
        heap.push(5);
        heap.push(3);
        heap.push(8);
        heap.push(10);
        heap.print(); //3 5 8 10 

        heap.push(15);
        heap.print(); //3 5 8 10 15 

        heap.pop();
        heap.print(); //5 10 8 15 

        heap.pop();
        heap.print(); //8 10 15 

        cout<<heap.top(); //8
    }