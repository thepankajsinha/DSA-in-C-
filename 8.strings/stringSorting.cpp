#include <iostream>
#include <string>
#include <vector>
using namespace std;

void stringSorting(string str){
    vector<int>alpha(26,0);
    string ans;

    for (int i = 0; i < str.size(); i++)
    {
        alpha[str[i]-'a'] ++;
    }

    for (int i = 0; i < 26; i++)
    {
        char ch = 'a' + i;
        while (alpha[i])
        {
            ans = ans + ch;
            alpha[i]--;
        }
        
    }
     cout<<ans;  
}

int main()
{
    string s;
    cin>>s;

    stringSorting(s);
}