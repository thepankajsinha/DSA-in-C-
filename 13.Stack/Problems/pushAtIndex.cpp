#include <bits/stdc++.h>
using namespace std;

void pushAtIndex(stack<int>& st, int x, int idx){
    stack<int> helper;

    while(st.size() > idx){
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
    int idx = 3;

    cout<<"Stack before pushing "<<endl;
    display(st);
    cout<<endl;

    cout<<"Stack after pushing "<<endl;
    pushAtIndex(st, x, idx);
    display(st);
}