#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string s){
    //condition if string is odd length
    if(s.length() % 2 == 0) return false;

    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == '(' ){
            st.push(s[i]);
        }
        else if(s[i] == ')' ){
            if(st.size()==0) return false;
            else st.pop();
        }
    }

    if(st.size()==0) return true;
    else return false;  //if stack is not empty at the end, then parentheses are not balanced.
    
}
int main(){
    string s = "(())()(";
    cout<<isBalanced(s);
}