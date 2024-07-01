#include <iostream>
using namespace std;

int searchInSortedRotatedArray(int arr[], int n, int target){
    int start = 0, end = n-1, ans = -1;

    while (start <= end)
    {
        int mid = (start + end )/2;
        if (arr[mid] == target)
        {
            return mid;
        }

        else if (arr[mid] >= arr[0])
        {
            if (arr[start] <= target && arr[mid] >= target)
            {
                end = mid -1;
            }
            else{
                start = mid + 1;
            }
            
        }

        else{
             if (arr[mid] <= target && arr[end] >= target)
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
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; 

    cout << "Enter the elements: "; 
    for (int i = 0; i < n; i++){
        cin >> arr[i]; 
    }

    int target;
    cout<<"Enter search element: ";
    cin>>target;

    int ans = searchInSortedRotatedArray(arr,n, target);
    cout<<ans;
}