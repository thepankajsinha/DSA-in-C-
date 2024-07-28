#include <iostream>
using namespace std;

void addTwoMatrix(int row, int col, int matrix1[][100], int matrix2[][100]){
    int ans[100][100];
    
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            ans[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

//without using extra resultant matrix
void optimisedAddTwoMatrix(int row, int col, int matrix1[][100], int matrix2[][100]){

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            matrix1[i][j] += matrix2[i][j];
        }
    }

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }
}


int main()
{
    int row, col;
    cout << "Enter the number of rows and columns for the matrices: ";
    cin >> row >> col;

    // matrix 1 input
    int matrix1[100][100];
    cout << "Enter elements of matrix 1:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    // matrix 2 input
    int matrix2[100][100];
    cout << "Enter elements of matrix 2:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix2[i][j];
        }
    }
    optimisedAddTwoMatrix(row, col, matrix1, matrix2);
    
}