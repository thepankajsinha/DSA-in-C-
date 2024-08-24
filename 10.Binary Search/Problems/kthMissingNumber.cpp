#include <iostream>
#include <vector>
using namespace std;

int kthMissingNumber(vector<int> &v, int k){
    int start = 0, end = v.size()-1, ans = -1;

    while (start <= end)
    {
        int mid = (start + end )/2;
        if (v[mid] - mid -1 >= k)
        {
            ans = mid;
            end = mid - 1;
        }

        else{
            start = mid + 1;     
        }              
    }

    return ans + k;
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
    
    int k;
    cout<<"Enter kth element: ";
    cin>>k;

    int ans = kthMissingNumber(v,k);
    cout<<"Kth missing element is : "<<ans;
}