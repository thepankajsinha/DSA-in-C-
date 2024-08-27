#include <bits/stdc++.h>
using namespace std;

// Function to search an element in a 2D array
void search(int arr[][4], int row, int col, int target){

    bool flag = false;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if (arr[i][j] == target){
                cout<<"found ";
                flag = true;
                break;
            }
        }
        if (flag==true) break;   
    }
    if (flag==false) cout<<"Element is not found"<<endl;
}

// Function to display a 2D array
void display(int arr[][4], int row, int col){
    // Using nested loops
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){

    // Declaration and Initialization
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };


    // Accesses the element
    int value = arr[1][2];  //T.C- O(1)


    // Displaying the array
    display(arr, 3, 4);     //T.C- O(n*m)


    //search an element
    search(arr, 3, 4, 11);  //T.C- O(n*m)


    //Take user input  //T.C- O(n*m)
    int row, col;
    cin >> row >> col;
    int user_arr[row][col];
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
           cin>>user_arr[i][j];
        }   
    } 
}