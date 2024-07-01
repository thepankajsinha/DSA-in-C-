#include <iostream>
using namespace std;

int maximumElement(int arr[], int size){
    
    int maxNo = arr[0];
    for (int i = 0; i < size; i++){
        if (arr[i] > maxNo){
            maxNo = arr[i];
    }
    }
    return maxNo;
}

int minimumElement(int arr[], int size){

    int minNo = arr[0];
    for (int i = 0; i < size; i++){
        if (arr[i] < minNo){
            minNo = arr[i];
    }

    }
    return minNo;
}



int main(){
    int size;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int maxNo = maximumElement(arr, size);
    int minNo = minimumElement(arr, size);

    cout << "Maximum number is: " << maxNo << endl;
    cout << "Minimum number is: " << minNo << endl;
}