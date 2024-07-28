#include <iostream>
#include <vector>
using namespace std;

void firstAndLastOccurrence(vector<int> &v, int target){

    int start =0, end = v.size()-1;
    int first = -1, last = -1;

    //first occurrence
    while (start <= end){
        int mid = (start + end)/2;

        if (v[mid]==target){
            first = mid;
            end = mid-1;
        }
        else if (v[mid] < target){
            start = mid + 1;
        }
        else if (v[mid] > target){
            end = mid - 1;
        }  
    }

    //last occurrence
    start = 0, end = v.size()-1;

     while (start <= end){
        int mid = (start + end)/2;

        if (v[mid]==target){
            last = mid;
            start = mid+1;
        }
        else if (v[mid] < target){
            start = mid + 1;
        }
        else if (v[mid] > target){
            end = mid - 1;
        }  
    }

    cout<<"First occurrence "<<first<<endl;  
    cout<<"Last occurrence "<<last;  
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

    firstAndLastOccurrence(v,target);
}

//Ex:
//arr = {10,20,20,20,30,40,50}, key = 20
//first occurences of 20 is at index 1

//arr = {10,20,20,20,30,40,50}, key = 20
//last occurences of 20 is at index 3

