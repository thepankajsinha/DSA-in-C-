#include <iostream>
#include <string>
#include <vector>
using namespace std;

void sentenceSorting(string s){

    vector<string>v(10);
    string word;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]>=48 && s[i]<=57)
        {
            int pos = s[i]-48;
            v[pos] = word + " ";
            word = "";
            i++;
        }
        else{
            word = word + s[i];
        }
    }
    string ans;
    for (int i = 0; i < v.size(); i++)
    {
        ans = ans + v[i];
    }
    ans.pop_back();
    cout<<ans;
}

int main()
{
    string s = "is2 sentence4 This1 a3" ;

    sentenceSorting(s);
}