#include <bits/stdc++.h>
using namespace std;

void checkAnagram(string s1, string s2){

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if (s1 == s2)
        cout << "The strings are anagrams." << endl;
    else
        cout << "The strings are not anagrams." << endl;
}

int main()
{

    string s1 = "anagram";
    string s2 = "nagaram";

    checkAnagram(s1, s2);
}