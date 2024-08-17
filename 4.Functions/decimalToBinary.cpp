#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void decimalToBinary(int decimal){

    string binary = "";

    while (decimal > 0){

       if(decimal % 2 == 0) binary = binary + "0";
       else binary = binary + "1";
       decimal = decimal / 2;
    }
    reverse(binary.begin(), binary.end());
    cout<<binary<<endl;
}

int main(){
    int decimal=42;
    decimalToBinary(decimal);    

}