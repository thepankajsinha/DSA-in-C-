//Leetcode-142 Return the node where cycle begins
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

//using slow and fast pointer
//slow move 1 step, fast move 2 step
int findLoopInLL(Node * head){  //T.C - O(n)
    Node *slow = head;
    Node *fast = head;
    bool found = false; 
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            found = true; //cycle detected
            break;
        }
    }
    if(found == false) return -1; //no cycle detected
    else{
        Node* temp = head;
        while(temp!= slow){
            temp = temp->next;
            slow = slow->next;
        }
        return slow->data;
    }
}
int main(){

    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = b;  //creating cycle in linked list

    cout<<findLoopInLL(a);
}