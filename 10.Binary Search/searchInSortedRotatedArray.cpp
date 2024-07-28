#include <bits/stdc++.h>
using namespace std;

int searchInSortedRotatedArray(vector<int> &v, int target){
    int start = 0, end = v.size()-1, ans = -1;

    while (start <= end)
    {
        int mid = (start + end )/2;
        if (v[mid] == target)
        {
            return mid;
        }

        else if (v[mid] >= v[0])
        {
            if (v[start] <= target && v[mid] >= target)
            {
                end = mid -1;
            }
            else{
                start = mid + 1;
            }
            
        }

        else{
             if (v[mid] <= target && v[end] >= target)
            {
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
            
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

    int target;
    cout<<"Enter search element: ";
    cin>>target;

    int ans = searchInSortedRotatedArray(v, target);
    cout<<ans;
}