#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data =val;
        next = NULL;
    }
};

int main(){

    // Creating four nodes
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    //Link all the nodes together
    a.next = &b;
    b.next = &c;
    c.next = &d;

    // Print the linked list
    Node *temp = &a;
    while (temp != NULL){

        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}