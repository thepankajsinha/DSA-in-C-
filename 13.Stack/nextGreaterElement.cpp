#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> v){

    stack<int> st;

    int n = v.size();
    vector<int> ans(n);

    ans[n-1] = -1;
    st.push(v[n-1]);

    for (int i = n-2; i >= 0; i--)
    {
        while ((st.size()>0) && st.top() <= v[i])
        {
            st.pop();
        }
        if(st.size()==0) ans[i] = -1;
        else ans[i] = st.top();
        st.push(v[i]);
    }
    return ans;
}
int main(){

    vector<int> v = {3,1,2,7,4,6,2,3};
    vector<int> ans = nextGreaterElement(v);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
}