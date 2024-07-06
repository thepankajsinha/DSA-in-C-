#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void largestSumContiguousSubarray(vector<int> &v){
    int maxi = INT_MIN, prefix=0;

    for (int i = 0; i < v.size(); i++)
    {
        prefix = prefix + v[i];
        maxi = max(maxi, prefix);
        if (prefix < 0)
        {
           prefix = 0;
        }      
    }
    cout<<maxi;
}

int main(){
    int size;
    cout << "Enter size: ";
    cin >> size;

    vector<int> v(size);
    cout << "Enter array elements: ";

    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    largestSumContiguousSubarray(v);    
}