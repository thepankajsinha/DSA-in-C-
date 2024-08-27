#include <iostream>
using namespace std;

void deleteElement(int arr[], int& n, int pos) {  //T.C - O(n)
    if (pos >= n || pos < 0) {
        cout << "Invalid position!" << endl;
        return;
    }

    // Shift elements to the left
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrease array size
    n--;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int n = 5; 

    int pos = 2; // Delete element at index 2

    deleteElement(arr, n, pos);

    cout << "Array after deletion: ";
    printArray(arr, n);

    return 0;
}
