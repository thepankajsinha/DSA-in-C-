#include <bits/stdc++.h>
using namespace std;

int main(){

    //Declarations and initialization of 2D vectors
    vector< vector<int> > v;

    vector<int> v1; //1 2 3
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    vector<int> v2; //4 5 6
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);

    vector<int> v3; //7 8 9
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);

    
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    //v-> {1,2,3,4,5,6,7,8,9}


    //how to print the vector
    for (int  i = 0; i < v.size(); i++){
        for (int j = 0; j < v[0].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    

}