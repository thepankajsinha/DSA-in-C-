#include <iostream>
#include <climits>
using namespace std;

int secondMax(int arr[], int size){
    
    int maxNo = arr[0];
    for (int i = 0; i < size; i++){
        if (arr[i] > maxNo){
            maxNo = arr[i];
        }
    }
    
    int secondMax = -1;
    for (int i = 0; i < size; i++){
        if (arr[i] != maxNo){
            secondMax = max(secondMax, arr[i]);
        }
    }
    return secondMax;
}

int main(){
    int size;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    int ans = secondMax(arr, size);

    cout << "Second Maximum element is: " << ans<< endl;
}