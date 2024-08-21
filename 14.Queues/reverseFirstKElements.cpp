//Reverse first K elements
#include <bits/stdc++.h>
using namespace std;

void display(queue<int>& q){
    int n = q.size();
    for(int i=0; i<n; i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x); 
    }
    cout<<endl;
}

void reverseFistKElement(queue<int>& q, int k){
    stack<int> st;
    //move k elements of queue into the stack
    for (int i = 0; i < k; i++){
        int x = q.front();
        q.pop();
        st.push(x);
    }
    
    // Move k elements back to the queue
    while(st.size()>0){
        int x = st.top();
        st.pop();
        q.push(x);
    }

    // Reverse the remaining elements of the queue
    for (int i = 0; i < q.size()-k; i++){
        int x = q.front();
        q.push(x);
        q.pop();
    }
}


int main(){
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    int k = 3;

    cout<<"Original Queue: ";
    display(q);

    reverseFistKElement(q,k);
    
    cout<<"Reversed Queue: ";
    display(q);

}