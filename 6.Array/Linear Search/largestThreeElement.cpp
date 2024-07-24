#include <bits/stdc++.h>
using namespace std;

void largestThreeElement(vector<int> &v){
    
    //find the first maximum element
    int firstMax = v[0];
    for (int i = 0; i < v.size(); i++){
        if (v[i] > firstMax){
            firstMax = v[i];
        }
    }
    cout<<"First maximum element "<<firstMax<<endl;


    //find the second maximum element
    int secondMax = v[0];
    for (int i = 0; i < v.size(); i++){

        if(v[i]==firstMax) v[i] = -1;
        else if (v[i] > secondMax){
            secondMax = v[i];
        }
    }
    cout<<"second maximum element "<<secondMax<<endl;


    //find the third maximum element
    int thirdMax = v[0];
    for (int i = 0; i < v.size(); i++){
        
        if(v[i]==secondMax) v[i] = -1;
        else if (v[i] > thirdMax){
            thirdMax = v[i];
        }
    }
    cout<<"Third maximum element "<<thirdMax<<endl;
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

    largestThreeElement(v);
}