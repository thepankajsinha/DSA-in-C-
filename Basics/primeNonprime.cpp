#include <iostream>     
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=2; i<=n-1; i++){
        if(n % i == 0){
            cout<<"Non-Prime"<<endl;
            break;
        }
        else{
            cout<<"Prime"<<endl;
            break;
        }
    }
    return 0;
}