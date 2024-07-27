#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{

    for (int i = 1; i < n; i++){
        int j = i;
        while (j>=1){

            if(arr[j] >= arr[j-1]) break;
            else swap(arr[j], arr[j-1]);
            j--;
        }
        
    }


    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n = 5;
    int arr[n] = {5, 4, 3, 2, 1};
    insertionSort(arr, n);
}