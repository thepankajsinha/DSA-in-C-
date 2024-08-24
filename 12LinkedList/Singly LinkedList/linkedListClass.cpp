#include <iostream>
using namespace std;

class Node{
public:
    int val;
    Node *next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList{
    public:
    Node *head;
    Node *tail;
    int size;

    LinkedList(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void insertAtTail(int val){
        Node *newNode = new Node(val);
        if(size == 0){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }

    void insertAtHead(int val){
        Node *newNode = new Node(val);
        if(size == 0){
            head = newNode;
            tail = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
        size++;
    }

    void insertAtIndex(int val, int index){

    //condition for index out of bound
    if(index < 0 || index > size) cout<<"Invalid Index."<<endl;

    //if index = 0
    else if (index==0) insertAtHead(val);

    //if index = size
    else if(index==size) insertAtTail(val);

    //if index is any other node
    else{
        Node *temp = head;
        for (int i = 0;  i < index-1; i++){
            temp = temp->next;
        }
        Node *newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
        size++;
    }

    }

    void display(){
    Node *temp = head;
    while (temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
    }

};

void displayRecursive(Node *head){
    if(head == NULL) return;
    cout<<head->val<<" ";
    displayRecursive(head->next);
    
}

bool search(Node *head, int key){
    Node *temp = head;
    while (temp != NULL){
       if(temp->val == key){
         return true;
        }

        temp = temp->next;
    }
    return false;
}


int main(){
    LinkedList list;
    list.insertAtTail(10); //10
    list.insertAtTail(20); //10 20
    list.insertAtTail(30); //10 20 30
    list.display();  //10 20 30 

    list.insertAtHead(40); //40 10 20 30
    list.insertAtHead(50); //50 40 10 20 30
    list.display(); //50 40 10 20 30

    list.insertAtIndex(60, 2); //50 40 60 10 20 30
    list.insertAtIndex(70, 3); //50 40 60 70 10 20 30
    list.display(); //50 40 60 70 10 20 30

    cout<<list.size; //7

    
    return 0;
}