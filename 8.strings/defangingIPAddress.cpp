#include <iostream>
#include <string>
using namespace std;

void defangingIPAddress(string address){
    int index = 0;
    string ans;
    while (index < address.size())
    {
        if(address[index] == '.')  ans = ans + "[.]";
        else  ans = ans + address[index];

        index++;
    }
    cout<<ans;
    
}

int main(){
    string address;
    getline(cin,address);

    defangingIPAddress(address);
}