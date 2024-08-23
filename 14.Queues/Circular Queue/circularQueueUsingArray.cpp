#include <bits/stdc++.h>
using namespace std;

class CircularQueue{
    public:

    int front = 0;
    int back = -1;
    int size=0;
    int arr[5];

    void push(int val){
        if(size == 5){
            cout << "Queue is full." << endl;
            return;
        }
        back = (back + 1) % 5; //update back index
        arr[back] = val;
        size++;
    }
    void pop(){
        if(size == 0){
            cout << "Queue is empty." << endl;
            return;
        }
        front = (front + 1) % 5; //update front index
        size--;
    }

    int frontElement(){
        if(size == 0){
            cout << "Queue is empty." << endl;
            return -1;
        }
        return arr[front];
    }

    int backElement(){
        return arr[back];
    }

};


int main(){
    CircularQueue q;
    q.push(1); //1
    q.push(2); //1 2
    q.push(3); //1 2 3
    q.push(4); //1 2 3 4
    q.push(5); //1 2 3 4 5
    cout<<q.frontElement()<<endl; // Output: 1
    cout<<q.backElement() <<endl; // Output: 5
    q.pop(); //2 3 4 5
    cout<<q.frontElement()<<endl; // Output: 2
    q.push(10); //10 2 3 4 5
    cout<<q.frontElement()<<endl; // Output: 2
    cout<<q.backElement()<<endl; // Output: 10
    q.push(20); //Output: Queue is full.
    return 0;
}