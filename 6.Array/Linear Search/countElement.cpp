#include <bits/stdc++.h>
using namespace std;

int countElement(vector<int> v, int target){

    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] > target) count++;
    }
    
    return count;
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int>v;
    cout<<"Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout<<"Target element: ";
    int target;
    cin >> target;

    cout<<countElement(v, target);
    
}