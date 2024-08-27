#include <iostream>
using namespace std;


void insertElement(int arr[], int& n, int pos, int element) { //T.C - O(n)
    if (pos > n || pos < 0) {
        cout << "Invalid position!" << endl;
        return;
    }

    // Shift elements to the right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos] = element;

    // Increase array size
    n++;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int n = 5; // current number of elements

    int element = 99;
    int pos = 2; // Insert at index 2

    insertElement(arr, n, pos, element);

    cout << "Array after insertion: ";
    printArray(arr, n);

    return 0;
}
