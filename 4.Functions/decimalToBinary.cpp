#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void decimalToBinary(int decimal){

    int binary = 0;
    int i = 0;
    
    while(n != 0){
        int lastBit = n & 1; //to get last bit  
        binary = binary + (lastBit * pow(10, i));  
        n = n >> 1;
        i++;
    }
}

int main(){
    int decimal=42;
    decimalToBinary(decimal);    

}
