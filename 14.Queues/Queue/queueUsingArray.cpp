//array implementation of queue operations
#include <bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int arr[5];
    int front = 0;
    int back = 0;

    void push(int val){ //T.C -O(1)
        if(size()==5){
            cout<<"Queue is full."<<endl;
            return;
        }
        else{
            arr[back] = val;
            back++;
        }
    }

    int size(){  //T.C -O(1)
        return back - front;
    }

    void pop(){  //T.C -O(1)
        if(size()==0){  
            cout<<"Queue is empty."<<endl;
            return;
        }
        else{
            front++;
        }
    }

    int returnFront(){ //T.C -O(1)
        if(size()==0) cout<<"Queue is Empty"<<endl;
        else return arr[front];
    }

    int returnBack(){ //T.C -O(1)
        if(size()==0) cout<<"Queue is Empty"<<endl;
        else return arr[back-1];
    }

    void display(){ //T.C -O(n)
        for (int i = front; i < back; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.display(); //1 2 3 4 5 
    q.push(6);   //Queue is full.
    q.pop();
    q.display(); //2 3 4 5 
    cout<<"Front element "<<q.returnFront()<<endl; //2
    cout<<"Back element "<<q.returnBack()<<endl; //5
    cout<<"Size "<<q.size()<<endl; //4
    return 0;
}