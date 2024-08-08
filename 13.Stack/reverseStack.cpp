#include <bits/stdc++.h>
using namespace std;

void reverseStack(stack<int>& st){
    stack<int> gt;  //temp stack
    stack<int> rt;  //temp stack

    //move all elements of stack from st to gt
    while(st.size() > 0){
        int x = st.top();
        gt.push(x);
        st.pop();
    }

    //move all elements of stack from gt to rt
    while(gt.size() > 0){
        int x = gt.top();
        rt.push(x);
        gt.pop();
        
    }

    //move all elements of stack from rt to st
    while(rt.size() > 0){
        int x = rt.top();
        st.push(x);
        rt.pop();
    }
}

void display(stack<int>& st){
    stack<int> temp;  //temprorary stack

    //Print the stack without loosing elements
    while(st.size() > 0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    while(temp.size() > 0){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout<<"Original Stack: "<<endl;
    display(st);
    cout<<endl;

    cout<<"Reversed Stack: "<<endl;
    reverseStack(st);
    display(st);
}