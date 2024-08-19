//Implement circular queue using dequeue
//circular queue -> front is connected to back which forms a circular queue
#include <iostream>
#include <deque>
using namespace std;

class CircularQueue {
public:
    deque<int> dq;
    int maxSize;

    CircularQueue(int size){
        maxSize = size;
    }

    void push(int value) {
        if (dq.size() == maxSize) {
            cout << "Circular Queue is full ";
            return;
        }
        dq.push_back(value);
    }

    void pop() {
        if (dq.empty()) {
            cout << "Circular Queue is empty";
        }
        dq.pop_front();
    }

    int front() {
        if (dq.empty()) {
            cout << "Circular Queue is empty";
            return -1;
        }
        return dq.front();
    }

    bool isFull() {
        return dq.size() == maxSize;
    }

    bool isEmpty() {
        return dq.empty();
    }

    int size() {
        return dq.size();
    }

    void display() {
        std::cout << "Circular Queue: ";
        for (int i : dq) {
            cout << i << " ";
        }
        cout<<endl;
    }
};

int main() {
    CircularQueue cq(5); 
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.push(4);
    cq.push(5);
    cq.pop();
    
    cq.display();
    cout<<cq.size();

}
