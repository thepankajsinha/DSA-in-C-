#include <bits/stdc++.h>
using namespace std;

void checkDuplicate(vector<int> arr){

bool found = false;

    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i] == arr[j]){
                found = true;
                break;
            }
        }
    }

    if(found==false){
        cout << "No duplicate elements found." << endl;
    } else {
        cout<<"Duplicate elements found" << endl;
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
        cin >> x;
        arr.push_back(x);
    }

    checkDuplicate(arr);
}