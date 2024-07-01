#include <iostream>
using namespace std;

int peakIndexInMountainArray(int arr[], int n){

    int start =0, end = n-1;

    while (start <= end){
        int mid = (start + end)/2;

        if (arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
            return mid;
        }
        else if (arr[mid] > arr[mid-1]){
            start = mid + 1;
        }
        else if (arr[mid] < arr[mid-1]){
            end = mid - 1;
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

    int ans =peakIndexInMountainArray(arr,n);
    cout<<ans;
}