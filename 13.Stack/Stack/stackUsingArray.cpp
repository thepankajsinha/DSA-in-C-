#include <bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int arr[10];
    int idx = -1;

    void push(int val){ //T.C -O(1)
        if(size() == 10){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        else{
            idx++;
            arr[idx] = val;
        }
    }

    int size(){  //T.C -O(1)
        return idx+1;
    }

    void pop(){  //T.C -O(1)
        if(idx == -1) cout<<"Stack Underflow"<<endl;
        else idx--;
    }

    int top(){  //T.C -O(1)
        if(idx == -1) cout<<"Stack is Empty"<<endl;
        else return arr[idx];
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