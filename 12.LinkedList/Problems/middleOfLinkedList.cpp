//Leetcode-876 middle of the linkedlist
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

//using slow and fast pointer, we can solve this problem in one loop
//slow move 1 step, fast move 2 step
int middle(Node * head){  //T.C - O(n)
    Node *slow = head;
    Node *fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
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

    cout<<middle(a);
}

//more problem on this concept- delete middle node