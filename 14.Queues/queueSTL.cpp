#include <bits/stdc++.h>
using namespace std;

void display(queue<int>& q){
    int n = q.size();
    for(int i=0; i<n; i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x); // Push the popped element back to the queue
    }
    cout<<endl;
}


int main(){

    // Create a queue
    queue<int> q;

    // Insert elements into the queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    // Print the front element of the queue
    cout<<"Front element : "<<q.front()<<endl;


    //print rear element of the queue
    cout<<"Back element: "<<q.back()<<endl;
    

    // Print the size of the queue
    cout<<"Queue size: "<<q.size()<<endl;

    // Remove the front element of the queue
    q.pop();
    
    // Check if the queue is empty
    cout<<q.empty()<<endl;

    // Display queue 
    display(q);

}