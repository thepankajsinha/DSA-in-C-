#include <iostream>
#include <vector>
using namespace std;

void twoSum(vector<int> &v, int target){
    int start =0, end =v.size()-1;

    while (start<=end)
    {
        if (v[start] + v[end]== target)
        {
            cout<<v[start]<<" "<<v[end];
            break;
        }
        else if (v[start] + v[end] > target)
        {
            end--;
        }
        else if (v[start] + v[end] < target)
        {
            start++;
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


    int target;
    cout<<"Enter target: ";
    cin>>target;
    twoSum(v,target);    
}