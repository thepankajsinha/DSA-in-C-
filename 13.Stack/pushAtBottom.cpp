#include <bits/stdc++.h>
using namespace std;

void pushAtBottom(stack<int>& st, int x){
    stack<int> helper;

    while(st.size() > 0){
        helper.push(st.top());
        st.pop();
    }

    st.push(x);

    while(helper.size() > 0){
        st.push(helper.top());
        helper.pop();
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

    int x = 100;

    cout<<"Stack before pushing "<<endl;
    display(st);
    cout<<endl;

    cout<<"Stack after pushing "<<endl;
    pushAtBottom(st, x);
    display(st);
}