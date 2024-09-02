// Max heap implementation using array
#include <bits/stdc++.h>
using namespace std;

class MaxHeap{
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
            if (arr[parentIndex] < arr[i]){
                swap(arr[parentIndex], arr[i]);
                i = parentIndex;
            }
            else break;
        }
    }

    void pop(){ // T.C - O(logn)
        if (size == 0){
            cout << "Heap is empty!" << endl;
            return;
        }

        // swap root with last element
        swap(arr[1], arr[size]);
        size--;

        // satisfy maxheap property
        int i = 1;
        while (i < size){

            int leftChildIndex = 2 * i;
            int rightChildIndex = 2 * i + 1;

            if (leftChildIndex < size && arr[i] < arr[leftChildIndex]){
                swap(arr[i], arr[leftChildIndex]);
                i = leftChildIndex;
            }
            else if (rightChildIndex < size && arr[i] < arr[rightChildIndex]){
                swap(arr[i], arr[rightChildIndex]);
                i = rightChildIndex;
            }
            else break;
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

    int main()
    {
        MaxHeap heap;
        heap.push(5);
        heap.push(3);
        heap.push(8);
        heap.push(10);
        heap.print(); //10 8 5 3

        heap.push(15);
        heap.print(); //15 10 5 3 8 

        heap.pop();
        heap.print(); //10 8 5 3

        heap.pop();
        heap.print(); //8 5 3

        cout<<heap.top(); //8
    }