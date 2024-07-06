#include <iostream>
#include <climits>
using namespace std;

void rotateMatrix90Clockwise(int row, int col, int matrix[][100])
{

    int transpose[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }

    for (int i = 0; i < row; i++)

    {
        int start = 0;
        int end = col - 1;
        while (start < end)
        {
            swap(transpose[i][start], transpose[i][end]);
            start++;
            end--;
        }
    }
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

    rotateMatrix90Clockwise(row, col, matrix);
}