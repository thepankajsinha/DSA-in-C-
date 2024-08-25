#include <iostream>
using namespace std;


class Node{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// class Node is a user defined data structure
class DoublyLinkedList{
public:
    Node *head;
    Node *tail;
    int size;

    // constructor for initialization of head, tail and size
    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
        size = 0;
    }


    void insertAtTail(int val){  // T.C- O(1)
        Node *newNode = new Node(val);
        if (size == 0){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            newNode->prev = tail;
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
            head->prev = newNode;
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
            newNode->prev = temp;
            newNode->next-> prev = newNode;
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
            if(head != NULL) head->prev = NULL; //Conncet current head to null
            if(head == NULL) tail = NULL; 
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
        else if(size == 1){
            deleteFromHead();
            return;
        }

        // condition for more than one node linked list
        Node *temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
    }

    void deleteAtIndex(int index){ //T.C - O(n)

        // if index is at first node
        if (index == 0){
            deleteFromHead();
            return;
        }

        // if index is last node
        else if (index == size-1){
            deleteFromTail();
            return;
        }

        // if index is any other node
        Node *temp = head;
        for (int i = 0; i < index - 1; i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        temp->next->prev = temp;
        size--;
    }
};

int main(){
    
    DoublyLinkedList li;
    li.insertAtTail(1);
    li.insertAtTail(2);
    li.insertAtTail(3);
    li.display(); //1 2 3

    li.insertAtHead(4);
    li.display(); //4 1 2 3

    li.insertAtIndex(5, 2);
    li.display(); //4 1 5 2 3

    li.deleteFromHead();
    li.display(); //1 5 2 3

    li.deleteFromTail();
    li.display(); //1 5 2

    li.deleteAtIndex(1);
    li.display(); //1 2
    
    return 0;
}