#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

void insertAtFront(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head==NULL)
    {
        head = newNode;
    }
    else{
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        
    }
}

void insertAtIndex(Node *&head, int index, int value){
    if (index==0)
    {
        insertAtFront(head, value);
    }

    Node *temp = head;
    for (int i = 0; temp != NULL && i < index-1; i++)
    {
        temp = temp->next;
    }

    if (temp==NULL)
    {
        cout<<"Index out of bound";
    }
    
    Node *newNode = new Node(value);
    newNode->next = temp->next;
    temp->next = newNode;
}

void displayLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL;
    insertAtFront(head, 5);
    insertAtFront(head, 10);
}