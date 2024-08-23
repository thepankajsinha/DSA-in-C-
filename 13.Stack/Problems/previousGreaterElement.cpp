#include <bits/stdc++.h>
using namespace std;

vector<int> previousGreaterElement(vector<int> v){

    stack<int> st;

    int n = v.size();
    vector<int> ans(n);

    ans[0] = -1;
    st.push(v[0]);

    for (int i = 0; i <= n-2; i++)
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
    vector<int> ans = previousGreaterElement(v);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
}