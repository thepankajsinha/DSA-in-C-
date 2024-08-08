#include <bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int arr[10];
    int idx = -1;

    void push(int val){
        if(isFull()){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        else{
            idx++;
            arr[idx] = val;
        }
    }

    int size(){
        return idx+1;
    }

    void pop(){
        if(isEmpty()) cout<<"Stack Underflow"<<endl;
        else idx--;
    }

    int top(){
        if(idx == -1) cout<<"Stack is Empty"<<endl;
        else return arr[idx];
    }

    bool isEmpty(){
        if(idx == -1) return true;
    }


    bool isFull(){
        if(size() == 10) return true;
    }

};

int main(){
    Stack st;
    st.push(5);
    st.push(10);
    st.push(15);
    st.push(20);
    st.push(20);
    st.push(5);
    st.push(10);
    st.push(15);
    st.push(20);
    st.push(20);

   cout<<st.top(); 
}