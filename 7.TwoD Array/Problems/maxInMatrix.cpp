#include <bits/stdc++.h>
using namespace std;

void maxInMatrix(vector< vector<int> > arr){
    
    int max = INT_MIN;
    for (int i = 0; i < arr.size(); i++){
        for (int j = 0; j < arr[0].size(); j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
       } 
    }
    cout << "Maximum element in the matrix: " << max << endl;
}

int main()
{

    vector< vector<int> > v(4, vector<int>(3));

    cout << "Enter the elements of the matrix (4x3):\n";

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            cin>>v[i][j];
        }
        
    }
    
    maxInMatrix(v);
    
}