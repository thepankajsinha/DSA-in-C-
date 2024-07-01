#include <iostream>
#include <climits>
using namespace std;

void rotateMatrix90Anticwise(int row, int col, int matrix[][100])
{

    //transpose given matrix
    int transpose[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }

    // reverse transpose matrix column wise
    for (int j = 0; j < col; j++)

    {
        int start = 0;
        int end = row - 1;
        while (start < end)
        {
            swap(transpose[start][j], transpose[end][j]);
            start++;
            end--;
        }
    }
    

    //print transpose matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int row, col;
    cin >> row >> col;

    int matrix[100][100];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

   rotateMatrix90Anticwise(row, col, matrix);
}