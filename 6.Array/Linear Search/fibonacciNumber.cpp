//find Nth fibonacci number
#include <iostream>
#include <climits>
using namespace std;

int fibonacciNumber(int n){

    int arr[n];
    arr[0]=0;
    arr[1]=1; 

    for (int i = 2; i <= n-1; i++){
        
       arr[i]= arr[i-1] + arr[i-2];
    }  
    return arr[n-1];
}

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int fibonacci = fibonacciNumber(n);

    cout<<n<<" th"<<" fibonacci number is "<<fibonacci<<endl;
}