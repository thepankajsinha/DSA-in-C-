// Find the unique number in a given Array where all the elements are being repeated twice with one
// value being unique.

#include <bits/stdc++.h>
using namespace std;

int findUniqueNumber(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        int count = 0;

        for (int j = 0; j < v.size(); j++)
        {
            if (v[i] == v[j]) count++;
        }

        if (count == 1){
            cout << "Unique element is " << v[i];
            return 0;
        } 
    }

    cout<<"No unique element found";
}

int main()
{

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

    findUniqueNumber(v);

}