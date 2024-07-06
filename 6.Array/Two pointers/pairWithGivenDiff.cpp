#include <iostream>
#include <vector>
using namespace std;

void pairWithGivenDIff(vector<int> &v, int target){
    int start =0, end =v.size()-1;

    while (start<=end)
    {
        if (v[end] - v[start] == target)
        {
            cout<<v[start]<<" "<<v[end];
            break;
        }
        else if (v[end] - v[start] < target)
        {
            start++;
        }
        else if (v[end] - v[start] > target)
        {
            end--;
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
    cout<<"Enter target element: ";
    cin>>target;
    pairWithGivenDIff(v,target);    
}