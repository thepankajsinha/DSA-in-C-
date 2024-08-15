#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool checkPalindrome(string s){
    int i = 0;
    int j = s.length()-1;
    
    while (i < j)
    {
        if(s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main()
{
    string s  = "racecar";

    cout<<checkPalindrome(s);
}