#include <iostream>
#include <string>
#include <vector>
using namespace std;

void longestPalindrome(string s){
    vector<int>lower(26,0);
    vector<int>upper(26,0);

    bool flag = false;
    int count =0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a') lower[s[i]-'a'] ++;
        else  upper[s[i]-'A'] ++;
        
    }

    for (int i = 0; i < 26; i++)
    {
        if (lower[i]%2==0) count = count + lower[i];
        else{
            count = count + lower[i]-1;
            flag = true;
        }


        if (upper[i]%2==0)  count = count + upper[i];
        else{
             count = count + upper[i]-1;
             flag = true;
        }
               
    }

    if(flag == true) cout<<count+1;
    else cout<<count;
}

int main()
{
    string s;
    cin>>s;

    longestPalindrome(s);
}