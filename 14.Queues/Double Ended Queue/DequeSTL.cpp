//Deque -> Double ended queue -> push and pop at both ends
#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> mydeque;

    // Insert elements at the front and back
    mydeque.push_front(10);  //10
    mydeque.push_back(20);   //10 20
    mydeque.push_front(30);  //30 10 20
    mydeque.push_back(40);   //30 10 20 40

    // Print deque elements
    cout << "Initial deque: ";
    for (int i = 0; i < mydeque.size(); i++) {
        cout << mydeque[i] << " ";
    }
    cout << endl;
    //Initial deque: 30 10 20 40

    // Remove elements from the front and back
    mydeque.pop_front();  //10 20 40
    mydeque.pop_back();  //10 20

    // Print updated deque elements
    cout << "Updated deque: ";
    for (int i = 0; i < mydeque.size(); ++i){
        cout << mydeque[i] <<" ";
    }
    cout << endl;
    //Updated deque: 10 20

    // Access elements at the front
    cout<<mydeque.front()<<endl;

    // Access elements at the back
    cout<<mydeque.back()<<endl;

    //size of deque
    cout<<mydeque.size();
}