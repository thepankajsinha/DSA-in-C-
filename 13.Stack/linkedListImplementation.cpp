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

class Stack{
    public:
    Node* head;
    int size;

    Stack(){
        head = NULL;
        size = 0;
    }

    //inserting node at head
    void push(int val){
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        size++;
    }

    //deleting node from head
    void pop(){
        if(head == NULL){
            cout<<"Stack is empty!"<<endl;
            return;
        }
        head = head->next;
        size--;
    }

    int top(){
        if(head != NULL){
            cout<<"Stack is empty!"<<endl;
            return -1;
        }
        return head->val;
    }


    void display(){
      Node* temp = head;
      while(temp!= NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
      }
      cout<<endl;
    }

};


int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.display(); // Output: 3 2 1
    cout<<s.size;
}