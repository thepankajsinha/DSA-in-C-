#include <iostream>
using namespace std;

int searchInsertPosition(int arr[], int n, int target){

    int start =0, end = n-1;
    int index = n;

    while (start <= end){
        int mid = (start + end)/2;

        if (arr[mid]==target){
            index = mid;
            break;
        }
        else if (arr[mid] < target){
            start = mid + 1;
        }
        else if (arr[mid] > target){
            index = mid;
            end = mid - 1;
        }  
    }
    return index;

 
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
    cout<<"Enter the target element: ";
    cin>>target;

    int ans = searchInsertPosition(arr,n,target);
    cout<<ans;
}