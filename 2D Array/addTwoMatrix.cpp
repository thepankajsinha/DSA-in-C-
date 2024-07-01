#include <iostream>
using namespace std;

void addTwoMatrix(int row, int col, int matrix1[][100], int matrix2[][100])
{
    int ans[100][100];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ans[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}


int main()
{
    int row, col;
    cin >> row >> col;

    // matrix 1 input
    int matrix1[100][100];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    // matrix 2 input
    int matrix2[100][100];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix2[i][j];
        }
    }
    addTwoMatrix(row, col, matrix1, matrix2);
    
}