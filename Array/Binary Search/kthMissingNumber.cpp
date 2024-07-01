#include <iostream>
using namespace std;

int kthMissingNumber(int arr[], int n, int k){
    int start = 0, end = n-1, ans = -1;

    while (start <= end)
    {
        int mid = (start + end )/2;
        if (arr[mid] - mid -1 >= k)
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
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; 

    cout << "Enter the elements: "; 
    for (int i = 0; i < n; i++){
        cin >> arr[i]; 
    }

    int k;
    cout<<"Enter kth element: ";
    cin>>k;

    int ans = kthMissingNumber(arr,n,k);
    cout<<"Kth missing element is : "<<ans;
}