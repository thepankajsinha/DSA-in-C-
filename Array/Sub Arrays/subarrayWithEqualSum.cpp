#include <iostream>
#include <vector>
using namespace std;

void subarrayWithEqualSum(vector<int> &v){
    int sum = 0, ans=0, prefix=0;
    for (int i = 0; i < v.size(); i++)
    {
        sum = sum + v[i];
    }

    prefix = 0;
    for (int i = 0; i < v.size()-1; i++)
    {
        prefix = prefix + v[i];

        ans = sum - prefix;
        if (ans == prefix)
        {
            cout<<1;
            break;
        }
    }
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

    subarrayWithEqualSum(v);    
}