#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

int size(Node *head){
    Node *temp = head;
    int count = 0;
    while (temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtFront(Node *&head, int value){
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node *&head, int value){
    Node *newNode = new Node(value);
    if (head==NULL){
        head = newNode;
    }
    else{
        Node *temp = head;
        while (temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;    
    }
}

void insertAtIndex(Node *&head, int index, int value){

    //condition for index out of bound
    if(index < 0 || index > size(head))
    {
        cout<<"Index out of bound";
        return;
    }

    //if index is first node
    if (index==0){
        insertAtFront(head, value);
        return;
    }

    //if index is last node
    else if(index==size(head)){
        insertAtEnd(head, value);
        return;
    }

    //if index is any other node
    Node *temp = head;
    for (int i = 0;  i < index-1; i++)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(value);
    newNode->next = temp->next;
    temp->next = newNode;

}

void display(Node *head){
    Node *temp = head;
    while (temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void displayRecursive(Node *head){

    if(head == NULL) return;
    cout<<head->data<<" ";
    displayRecursive(head->next);
    
}

bool search(Node *head, int key){
    Node *temp = head;
    while (temp != NULL){
       if(temp->data == key){
         return true;
        }

        temp = temp->next;
    }
    return false;
}





int main()
{
    Node *head = NULL;
    insertAtIndex(head, 0, 10);
    insertAtIndex(head, 1, 20);
    insertAtIndex(head, 2, 30);
    display(head);
    
}