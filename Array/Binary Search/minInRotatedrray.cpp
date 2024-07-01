#include <iostream>
using namespace std;

int minInRotatedArray(int arr[], int n){

    int start =0, end = n-1, ans;

    while (start <= end){
        int mid = (start + end)/2;

        if (arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            ans = arr[mid];
            end = mid - 1;
        }
    }
    return ans;
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

    int ans =minInRotatedArray(arr,n);
    cout<<ans;
}