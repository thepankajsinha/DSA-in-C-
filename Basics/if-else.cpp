#include <iostream>     
using namespace std;

int main(){
    int age;
    cout<<"Enter Age: "<<endl;
    cin>>age;

    if (age > 18)
    {
       cout<<"You can vote.";
    }
    else
    {
        cout<<"You can not vote.";
    }
    
}