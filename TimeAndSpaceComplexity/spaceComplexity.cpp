#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b;
    cin>>a>>b;
    cout<<a + b;
    //S.C = O(1)



    vector<int> v(10);
    for (int i = 0; i < v.size(); i++){
        v.push_back(i);
    }
    //S.C = O(1)




    vector<int> v;
    for (int i = 0; i < v.size(); i++){
        v.push_back(i);
    }
    //S.C = O(n)


    int n,m;
    int arr[n][m];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            arr[i][j] = i + j;
        }
    }
    //S.C = O(n^2)
    
}