#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void binaryToDecimal(string s){
    int n = s.length();
    int decimal = 0;
    for (int i=0; i<n; i++){
        int x = s[i]-'0';
        decimal = decimal + x * pow(2, n-i-1);
    }
    cout << decimal << endl;
}

int main(){
    string s = "101010";
    binaryToDecimal(s);
}