//Reverse queue using stack
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

void reverseQueue(queue<int>& q){
    stack<int> st;
    //move all elements of queue into the stack
    while(q.size()>0){
        int x = q.front();
        q.pop();
        st.push(x);
    }
    
    // Move all elements back to the queue
    while(st.size()>0){
        int x = st.top();
        st.pop();
        q.push(x);
    }
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

    cout<<"Original Queue: ";
    display(q);

    reverseQueue(q);
    
    cout<<"Reversed Queue: ";
    display(q);

}