//Leetcode-19 Remove Nth Node From End of List
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
Node* removeNthNodeFromEnd(Node * head, int n){  //T.C - O(n)
    Node *slow = head;
    Node *fast = head;

    // Move fast pointer to n+1 steps
    for (int i = 0; i < n+1; i++){
        if(fast==NULL) return head->next; // for single node
        fast = fast->next;
    }

    //move slow and fast pointer at same speed
    while(fast!= NULL){
        slow = slow->next;
        fast = fast->next;
    }
    
    //now the slow pointer is exactly at left of the nth node from end
    slow->next = slow->next->next;
    return head;
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

    removeNthNodeFromEnd(a,5);
}