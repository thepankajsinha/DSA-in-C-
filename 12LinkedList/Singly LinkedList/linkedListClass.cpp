#include <iostream>
using namespace std;

// class Node is a user defined data structure
class Node{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList{
public:
    Node *head;
    Node *tail;
    int size;

    // constructor for initialization of head, tail and size
    LinkedList(){
        head = NULL;
        tail = NULL;
        size = 0;
    }


    void insertAtTail(int val){  // T.C- O(1) with tail and O(n) without tail node
    
        Node *newNode = new Node(val);
        if (size == 0){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }
 
    void insertAtHead(int val){  // T.C- O(1)
        Node *newNode = new Node(val);
        if (size == 0){
            head = newNode;
            tail = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
        size++;
    }
 
    void insertAtIndex(int val, int index){  // T.C- O(n)

        // condition for index out of bound
        if (index < 0 || index > size) cout << "Invalid Index." << endl;

        // if index = 0
        else if (index == 0) insertAtHead(val);

        // if index = size
        else if (index == size) insertAtTail(val);

        // if index is any other node
        else{
            Node *temp = head;
            for (int i = 0; i < index - 1; i++){
                temp = temp->next;
            }
            Node *newNode = new Node(val);
            newNode->next = temp->next;
            temp->next = newNode;
            size++;
        }
    }
 
    void display(){  // T.C- O(n)
        Node *temp = head;
        while (temp != NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
  
    bool search(int target){  // T.C- O(n)
        Node *temp = head;
        while (temp != NULL){
            if (temp->val == target) return true;
            else temp = temp->next;
        }
        return false;
    }
 
    void deleteFromHead(){  // T.C- O(1)
        // condition for empty linked list
        if (size == 0){
            cout << "Linked List is empty";
            return;
        }
        // condition for non empty linked list
        else{
            Node *temp = head; // store current node in temp variable
            head = head->next; // Update head to the next node
            delete temp;       // now delete the head node
        }
    }

    void deleteFromTail(){  // T.C- O(n)

        // condition for empty linked list
        if (size == 0){
            cout << "Linked List is empty";
            return;
        }

        // condition for single node linked list
        if (head->next == NULL){
            deleteFromHead();
            return;
        }

        // condition for more than one node linked list
        Node *temp = head; // store second last node in temp variable
        while (temp->next->next != NULL){
            temp = temp->next;
        }
        delete temp->next; // Delete the last node
        temp->next = NULL; // Change next of second last
    }

    void deleteAtIndex(int index){ //T.C - O(n)

        // if index is at first node
        if (index == 0){
            deleteFromHead();
            return;
        }

        // if index is last node
        else if (index == size){
            deleteFromTail();
            return;
        }

        // if index is any other node
        Node *temp = head;
        for (int i = 0; i < index - 1; i++){
            temp = temp->next;
        }

        temp->next = temp->next->next;
    }
};

int main()
{
    LinkedList list;

    list.insertAtTail(10);
    list.insertAtTail(20); 
    list.insertAtTail(30); 
    list.display();        // 10 20 30

    list.insertAtHead(40);
    list.insertAtHead(50); 
    list.display();        // 50 40 10 20 30

    list.insertAtIndex(60, 2);
    list.insertAtIndex(70, 3);
    list.display();            // 50 40 60 70 10 20 30

    cout<<list.size<<endl; //7
    cout<<list.search(30)<<endl; //1 which means true

    list.deleteFromHead();
    list.display();        // 40 60 70 10 20 30

    list.deleteFromTail();
    list.display();        // 40 60 70 10 20

    list.deleteAtIndex(2);
    list.display();        // 40 60 10 20

    return 0;
}