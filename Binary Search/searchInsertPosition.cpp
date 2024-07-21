#include <iostream>
#include <vector>
using namespace std;

int searchInsertPosition(vector<int> &v, int target){

    int start =0, end = v.size()-1;
    int index = v.size();

    while (start <= end){
        int mid = (start + end)/2;

        if (v[mid]==target){
            index = mid;
            break;
        }
        else if (v[mid] < target){
            start = mid + 1;
        }
        else if (v[mid] > target){
            index = mid;
            end = mid - 1;
        }  
    }
    return index;

 
}
int main()
{
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
    cout<<"Enter the target element: ";
    cin>>target;

    int ans = searchInsertPosition(v,target);
    cout<<ans;
}