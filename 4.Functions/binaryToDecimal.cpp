#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n) {
    int decimal = 0;   
    int i = 0;
        
    while(n != 0){        
        int lastDigit = n % 10;     
        decimal = decimal + (lastDigit * pow(2, i));   
        n = n / 10;   
        i++;     
    }
    return decimal;
}

int main(){
    int num = 1111;
    cout<<binaryToDecimal(num);
}