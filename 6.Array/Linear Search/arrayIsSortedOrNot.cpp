#include <bits/stdc++.h>
using namespace std;

void arrayIsSortedOrNot(vector<int> &v){

    bool flag = false;

    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] > v[i+1]) flag = true;
    }

    if(flag == true) cout << "Array is not sorted." << endl;
    else cout << "Array is sorted." << endl;
    
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

    arrayIsSortedOrNot(v);
}