#include <bits/stdc++.h>
using namespace std;

void printList(list<int> li){
    for (int val : li) {
        cout << val << " ";
    }
    cout << endl;
}

int main(){
    //Create a list of integers
    list<int> li;
    

    //add elements at the end
    li.push_back(1); //1
    li.push_back(2); //1 2
    li.push_back(3); //1 2 3
    printList(li); //1 2 3
    

    //add elements at the front
    li.push_front(4); //4 1 2 3
    li.push_front(5); //5 4 1 2 3
    li.push_front(6); //6 5 4 1 2 3
    printList(li); //6 5 4 1 2 3


    //insert elements at a specific position
    list<int>::iterator itr = li.begin();
    advance(itr,3); //reach at 3rd index
    li.insert(itr,10); //insert 10 at 3rd index
    printList(li); //6 5 4 10 1 2 3


    //return size of list
    cout<<"Size: "<<li.size()<<endl; //7


    //return head of list
    cout<<"Head: "<<li.front()<<endl; //6


    //return tail of list
    cout<<"Tail: "<<li.back()<<endl; //3


    //remove elements from the front
    li.pop_front();
    printList(li); //5 4 10 1 2 3
    

    //remove elements from the end
    li.pop_back();
    printList(li); //5 4 10 1 2
    
    
    //remove elements from a specific position
    itr = li.begin(); //update iterator at beginning of list
    advance(itr,2); //reach at 2nd index
    li.erase(itr); //remove element present at 2nd index
    printList(li); //5 4 1 2
    
    
    //remove all elements from the list
    li.clear();
    printList(li); //empty list
    
    return 0;
}