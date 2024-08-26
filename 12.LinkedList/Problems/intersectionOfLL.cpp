// Leetcode -160 Intersection of Two Linked Lists
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

int getIntersection(Node* headA, Node* headB){ // T.C - O(n)
    Node *tempA = headA;
    Node *tempB = headB;

    // find length of listA and listB
    int lenA = 0;
    while (tempA != NULL){
        lenA++;
        tempA = tempA->next;
    }

    int lenB = 0;
    while (tempB != NULL){
        lenB++;
        tempB = tempB->next;
    }

    tempA = headA;
    tempB = headB;

    // if list A is largest
    if (lenA > lenB){
        int diff = lenA - lenB;

        for (int i = 1; i <= diff; i++) tempA = tempA->next;
        while (tempA != tempB)
        {
            tempA = tempA->next;
            tempB = tempB->next;
        }
        return tempA->data;
    }
    else{
        int diff = lenB - lenA;

        for (int i = 1; i <= diff; i++) tempB = tempB->next;
        while (tempA != tempB){
            tempA = tempA->next;
            tempB = tempB->next;
        }
        return tempA->data;
    }
}

int main()
{
    //Linked list 1
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;  //a -> b -> c -> d -> e - Null

    //Linked list 2
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    
    f->next = g;
    g->next = h;
    h->next = c;   //f -> g -> h -> c -> d -> e -> Null


    cout<<getIntersection(a, f);
}