#include <bits/stdc++.h>
using namespace std;

void findLastOccurenceIndex(vector<int> &arr, int key){

    int lastIndex = -1;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == key){
            lastIndex = i;
        }
    }
    cout<<lastIndex;
}


    int main()
    {

        int size;
        cout << "Enter the size of the array: ";
        cin >> size;

        vector<int> arr(size);
        cout << "Enter the elements of the array: ";
        for (int i = 0; i < size; i++)
        {
            cin>>arr[i];
        }

        int key;
        cout << "Enter the element to find its last occurrence: ";
        cin >> key;

        findLastOccurenceIndex(arr, key);
    }
