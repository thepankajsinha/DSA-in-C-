#include <bits/stdc++.h>
using namespace std;

void twoSum(vector<int> &arr, int key){

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == key)
            {
                cout << "( " << i << " , " << j << ") "<< endl;
            }
        }
        
    }
    
}


    int main()
    {

        int size;
        cout << "Enter the size of the array: ";
        cin >> size;

        vector<int> arr;

        cout << "Enter the elements of the array: ";
        for (int i = 0; i < size; i++)
        {
            int x;
            cin>>x;
            arr.push_back(x);
        }

        int key;
        cout << "Enter target: ";
        cin >> key;

        twoSum(arr, key);
    }