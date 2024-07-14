#include <iostream>
using namespace std;

void vowelOrConsonent(char ch){
    if (ch=='a' || ch=='e' || ch=='i' ||ch=='o' ||ch=='u' ) cout<<"Vowel";
    else cout<<"Consonent";
     
}

int main(){
    char ch;
    cin>>ch;

    vowelOrConsonent(ch);
}