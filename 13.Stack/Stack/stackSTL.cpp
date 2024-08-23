#include <bits/stdc++.h>
using namespace std;

int main(){

    //Creating a stack
    stack<int> st;
    stack<int> temp;

    //Pushing elements into stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    //Popping elements from stack
    st.pop();

    //Size of stack
    cout<<st.size()<<endl;

    //Top of stack
    cout<<st.top()<<endl;

    //Print the stack without loosing elements
    while(st.size() > 0){
        cout<<st.top()<<" ";
        int x = st.top();
        temp.push(x);
        st.pop();
    }
    while(temp.size() > 0){
        int x = temp.top();
        st.push(x);
        temp.pop();
    }
    cout<<endl;

    cout<<st.top()<<endl;

}