#include <iostream>
#include <vector>
using namespace std;

int minInRotatedArray(vector<int> &v){

    int start =0, end = v.size()-1, ans;

    while (start <= end){
        int mid = (start + end)/2;

        if (v[mid] >= v[0]){
            start = mid + 1;
        }
        else{
            ans = v[mid];
            end = mid - 1;
        }
    }
    return ans;
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

    int ans =minInRotatedArray(v);
    cout<<ans;
}