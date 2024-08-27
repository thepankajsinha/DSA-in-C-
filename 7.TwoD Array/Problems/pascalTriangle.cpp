#include <bits/stdc++.h>
using namespace std;

vector< vector<int> > pascalTriangle(int n){

    // 2D vector is created
    vector< vector<int> > v;
    for (int i = 1; i <= n; i++)
    {
        vector<int> a(i,0);
        v.push_back(a);
    }
    

    // fill values in pascal triangle
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                v[i][j] = 1;

            else
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
        }
    }

    return v;
}


int main()
{

    vector<vector<int>> v = pascalTriangle(5);

    // print the pascal triangle
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}