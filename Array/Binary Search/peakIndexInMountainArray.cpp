#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int> &v){

    int start =0, end = v.size()-1;

    while (start <= end){
        int mid = (start + end)/2;

        if (v[mid] > v[mid-1] && v[mid] > v[mid+1]){
            return mid;
        }
        else if (v[mid] > v[mid-1]){
            start = mid + 1;
        }
        else if (v[mid] < v[mid-1]){
            end = mid - 1;
        }  
    }

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

    int ans =peakIndexInMountainArray(v);
    cout<<ans;
}