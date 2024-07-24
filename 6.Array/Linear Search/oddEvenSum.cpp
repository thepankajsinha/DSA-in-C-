//Find the difference between the sum of elements at even indices to the sum of elements at odd
//indices.

#include <bits/stdc++.h>
using namespace std;

void oddEvenSum(vector<int> &v){

    int oddSum = 0;
    int evenSum = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if(i % 2 == 0) evenSum = evenSum + v[i];

        else oddSum = oddSum + v[i];
    }

    cout<<abs(evenSum-oddSum)<<endl;
    
}

int main(){

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> v;
    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    oddEvenSum(v);
}