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

int size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void deleteFromFront(Node *&head)
{
    // condition for empty linked list
    if (head == NULL)
    {
        cout << "Linked List is empty";
        return;
    }
    // condition for non empty linked list
    else
    {
        Node *temp = head; // store current node in temp variable
        head = head->next; // Update head to the next node
        delete temp;       // now delete the head node
    }
}

void deleteFromEnd(Node *&head)
{

    // condition for empty linked list
    if (head == NULL)
    {
        cout << "Linked List is empty";
        return;
    }

    // condition for single node linked list
    if (head->next == NULL)
    {
        deleteFromFront(head);
        return;
    }

    // condition for more than one node linked list

    Node *temp = head; // store second last node in temp variable
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next; // Delete the last node

    temp->next = NULL; // Change next of second last
}

void deleteAtIndex(Node *&head, int index)
{

    // if index is at first node
    if (index == 0)
    {
        deleteFromFront(head);
        return;
    }

    // if index is last node
    else if (index == size(head))
    {
        deleteFromEnd(head);
        return;
    }

    // if index is any other node
    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }

    Node *nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
}

void display(Node *head)
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
    //five nodes created
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);
    Node *node4 = new Node(40);
    Node *node5 = new Node(50);

    //all nodes are linked together
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

}