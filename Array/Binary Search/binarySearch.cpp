#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    
    while (start <= end){
        int mid = (start + end)/2;

        if (arr[mid]==key){
            return mid;
        }
        else if (arr[mid] < key){
            start = mid + 1;
        }
        else if (arr[mid] > key){
            end = mid - 1;
        }  
    }
    return -1;    
}

int main(){
    
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; 

    cout << "Enter the elements: "; 
    for (int i = 0; i < n; i++){
        cin >> arr[i]; 
    }

    int key;
    cout<<"Enter the element which you want to find: ";
    cin>>key;

    int ans = binarySearch(arr, n, key);

    if (ans >= 0){
        cout<<"Element found at "<<ans<<" index";
    }
    else{
        cout<<"Element not found";
    }
    

}