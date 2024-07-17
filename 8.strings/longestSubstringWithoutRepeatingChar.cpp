#include <bits/stdc++.h>
using namespace std;

int longestSubstringWOCharRepeat(string s){

    vector<int>v(256,0);
    int start = 0, end = 0, maxLen =0;

    while (end < s.size())
    {
        while (v[s[end]]==1)
        {
            v[s[start]] = 0;
            start ++;
        }
        
        v[s[end]] = 1;
        maxLen = max(maxLen, end-start + 1);
        end++;
    }
    return maxLen;
}

int main(){

    string s;
    cin>>s;

    cout<<longestSubstringWOCharRepeat(s);

}