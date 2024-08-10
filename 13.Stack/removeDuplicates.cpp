#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string s){

    stack<char> st;
    st.push(s[0]);

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] != st.top()) st.push(s[i]);
    }

    string result = "";
    while ( st.size() > 0 )
    {
        result += st.top();
        st.pop();
    }
    
    reverse(result.begin(), result.end());
    return result;
    
}
int main(){
    string s = "aaabbbcddaabffg";
    s = removeDuplicate(s);
    cout<<s<<endl;
}