//implement queue using two stack
#include <bits/stdc++.h>
using namespace std;

class myQueue{
    public:
    stack<int> st;
    stack<int> helper;

    void push(int val){
        st.push(val);
    }

    int size(){
        return st.size();
    }

    void pop(){
        while (st.size()>0){
            int x = st.top();
            helper.push(x);
            st.pop();
        }
        
        helper.pop();

        while (helper.size()>0){
            int x = helper.top();
            st.push(x);
            helper.pop();
        }
    }

    int returnFront(){
        while (st.size()>0){
            int x = st.top();
            helper.push(x);
            st.pop();
        }
        
        return helper.top();

        while (helper.size()>0){
            int x = helper.top();
            st.push(x);
            helper.pop();
        }
    }

    int returnBack(){
        return st.top();
    }

    void display(){
        while (st.size()>0){
            cout<<st.top()<<" ";
            int x = st.top();
            helper.push(x);
            st.pop();
        }

        while (helper.size()>0){
            int x = helper.top();
            st.push(x);
            helper.pop();
        }
        cout<<endl;
    }

};

int main(){
    myQueue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.display(); //1 2 3 4 5 
    q.pop();
    q.display(); //2 3 4 5
    cout<<q.size()<<endl; //4
    cout<<q.returnFront()<<endl;
    cout<<q.returnBack()<<endl;
    return 0;
} 