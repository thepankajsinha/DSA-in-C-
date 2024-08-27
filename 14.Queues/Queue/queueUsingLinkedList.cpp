#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class Queue{
    public:
    Node* head;
    Node* tail;
    int size;

    Queue(){
        head = tail = NULL;
        size = 0;
    }

    //inserting node at tail
    void push(int val){  //T.C -O(1)
        Node* newNode = new Node(val);
        if(size == 0) head = tail = newNode;
        else{
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }

    //deleting node from head
    void pop(){  //T.C -O(1)
        if(size == 0){
            cout<<"Queue is empty!"<<endl;
            return;
        }
        head = head->next;
        size--;
    }

    int front(){  //T.C -O(1)
        if(size == 0){
            cout<<"Queue is empty!"<<endl;
            return -1;
        }
        return head->val;
    }

    int back(){  //T.C -O(1)
        if(size == 0){
            cout<<"Queue is empty!"<<endl;
            return -1;
        }
        return tail->val;
    }


    void display(){  //T.C -O(n)
      Node* temp = head;
      while(temp!= NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
      }
      cout<<endl;
    }

    int returnSize(){  //T.C -O(1)
        return size;
    }

};


int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.display();
    cout<<"Front: "<<q.front()<<endl;
    cout<<"Back: "<<q.back()<<endl;
    cout<<"Size: "<<q.returnSize()<<endl;
    q.pop();
    q.display();
    return 0;
}