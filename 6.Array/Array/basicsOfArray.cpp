#include <bits/stdc++.h>
using namespace std;


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

void searchInArray(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            cout << "Element found at index " << i << endl;
            return;
        }
    }
}

int main(){

    // Declarations and initialization
    int arr[5] = {1,2,3,4,5};


    // Traversing array  T.C - O(n)
    printArray(arr, 5);
    // Output: 1 2 3 4 5


    //access element  T.C - O(1)
    cout << "Element at index 2: " << arr[2] << endl;
    //Element at index 2: 3


    // Update element  T.C - O(1)
    arr[2] = 10;
    cout << "Updated element at index 2: " << arr[2] << endl;
    //Updated element at index 2: 10


    //array size  T.C - O(1)
    cout << "Size : " << sizeof(arr) / sizeof(arr[0]) << endl;
    //Size : 5


    // Search for an element  T.C - O(n)
    int target = 5;
    searchInArray(arr, 5, target);
    // Element found at index 4


    // Take user input
    int arr2[5];
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++){
        cin >> arr2[i];
    }
}