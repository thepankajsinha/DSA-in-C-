#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSortedArray(vector<int>& v1, vector<int>& v2){
    
    int n = v1.size();
    int m = v2.size();

    vector<int> result;

    int i = 0, j = 0, k = 0;

    while (i <= n-1 && j <= m-1) {
    {
        if (v1[i] < v2[j])
        {
            result.push_back(v1[i]);
            i++;
        }

        else
        {
            result.push_back(v2[j]);
            j++;
        }
        k++;
    }


    if (i == n){
        while (j <= m-1)
        {
            result.push_back(v2[j]);
            k++;
            j++;
        }
    }


    if (j == m){
        while (i <= n-1)
        {
            result.push_back(v1[i]);
            k++;
            i++;
        }
    }  
 
}

return result;
}

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main(){

    vector<int> v1 = {1,4,5,8};
    vector<int> v2 = {2,3,6,7,10,12};

    vector<int> ans = mergeSortedArray(v1,v2);
    display(ans);
    return 0;
}