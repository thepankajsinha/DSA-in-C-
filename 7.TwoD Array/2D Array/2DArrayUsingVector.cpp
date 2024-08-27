//how to use vector of vector as  2D array
#include <bits/stdc++.h>
using namespace std;

int main(){

    //Declarations and initialization of 2D vectors
    //Here 4 is no. of rows and 3 is no. of columns
    vector< vector<int> > v(4, vector<int>(3)); //this is equal as int arr[4][3]


    vector< vector<int> > arr = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}}; //this is equal as int arr[4][3]


    //no of rows in vector
    cout<<arr.size()<<endl;


    //no of columns in vector
    cout<<arr[0].size()<<endl;
    

    //how to print the vector
    for (int  i = 0; i < arr.size(); i++){
        for (int j = 0; j < arr[0].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}