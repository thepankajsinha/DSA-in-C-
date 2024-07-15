#include <iostream>
#include <string>
#include <Algorithm>
using namespace std;

//it takes character as input and it returns true if vowel found and it returns false if consonent found
bool checkVowels(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;

    else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') return true;

    else return false;
}

string sortVowels(string s){

    string temp ="";

    //this for loop traverse on each character of input string
    for (int i = 0; i < s.size(); i++)
    {
        //each character of input string is passed in check vowels function and if it returns true then that character is stored in temp variable.
        if (checkVowels(s[i]) == true)
        {
            temp = temp + s[i];
        }
    }
    
    //sort the temp string using inbuilt function
    sort(temp.begin(), temp.end());


    int index = 0;
    //this for loop traverse on each character of input string
    for (int i = 0; i < s.size(); i++)
    {
        //each character of input string is passed in check vowels function and if it returns true then that character will replace by character of temp string.
        if (checkVowels(s[i]) == true)
        {
            s[i]=temp[index];
            index++;
        }
    }

    cout<<s;

}

int main(){

    string s = "lEetcOde";

    sortVowels(s);
}

