#include <iostream>
#include <climits>
using namespace std;

void selectionSort(int arr[], int n){

    for (int i = 0; i < n-1; i++){
           
        int minElement = INT_MAX;
        int minIdx = -1;

        for (int j = i; j < n; j++){
            // select minimum element from unsorted array
            if (arr[j] < minElement){
                minElement = arr[j];
                minIdx = j;
            }
        }
        // swap the found minimum element with the first element of unsorted array
        swap(arr[i], arr[minIdx]);
    }


    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main()
{

    int n = 5;
    int arr[n] = {5,4,3,2,1};
    selectionSort(arr, n);
}