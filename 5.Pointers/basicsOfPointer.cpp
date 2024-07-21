#include <iostream>
using namespace std;

int main(){
    
    int a = 10;
    int *ptr = &a;
    cout<<ptr<<endl;      //0x61ff08

    char ch = 'a';
    char *ptr2 = &ch;
    cout<<ptr2;
}