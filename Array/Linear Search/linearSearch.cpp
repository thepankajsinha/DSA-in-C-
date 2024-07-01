#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key){
    for (int i = 0; i < size; i++){
        if (arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main()
{
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size]; 

    cout << "Enter the elements: "; 
    for (int i = 0; i < size; i++){
        cin >> arr[i]; 
    }

    int key;
    cout<<"Enter the element which you want to find: ";
    cin>>key;

    int ans = linearSearch(arr, size, key);
    cout<<ans;
}