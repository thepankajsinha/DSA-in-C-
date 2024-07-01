#include <iostream>
using namespace std;

void firstAndLastOccurrence(int arr[], int n, int target){

    int start =0, end = n-1;
    int first = -1, last = -1;

    //first occurrence
    while (start <= end){
        int mid = (start + end)/2;

        if (arr[mid]==target){
            first = mid;
            end = mid-1;
        }
        else if (arr[mid] < target){
            start = mid + 1;
        }
        else if (arr[mid] > target){
            end = mid - 1;
        }  
    }

    //last occurrence
    start = 0, end = n-1;

     while (start <= end){
        int mid = (start + end)/2;

        if (arr[mid]==target){
            last = mid;
            start = mid+1;
        }
        else if (arr[mid] < target){
            start = mid + 1;
        }
        else if (arr[mid] > target){
            end = mid - 1;
        }  
    }

    cout<<"First occurrence "<<first<<endl;  
    cout<<"Last occurrence "<<last;  
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

    firstAndLastOccurrence(arr,n,target);
}