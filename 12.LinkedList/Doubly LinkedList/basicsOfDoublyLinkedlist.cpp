#include <bits/stdc++.h>
using namespace std;

// class Node is a user defined data structure
class Node{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void display(Node *head){
    Node *temp = head;
    while (temp != NULL){
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main(){

    // Creating five nodes
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    // Link all the nodes together
    a->next = b; 
    b->prev = a; //a <-> b

    b->next = c;
    c->prev = b; //b <-> c

    c->next = d;
    d->prev = c; //c <-> d

    d->next = e;
    e->prev = d; //d <-> e

    // Print the linked list
    display(a);  
    //10 <-> 20 <-> 30 <-> 40 <-> 50 <-> NULL
}