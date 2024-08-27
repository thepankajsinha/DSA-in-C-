#include <iostream>
#include <climits>
using namespace std;

void rotateMatrix180Clockwise(int row, int col, int matrix[][100])
{

    // reverse matrix row wise
    for (int i = 0; i < row; i++)

    {
        int start = 0;
        int end = col - 1;
        while (start < end)
        {
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }

    // reverse matrix column wise
    for (int j = 0; j < row; j++)

    {
        int start = 0;
        int end = row - 1;
        while (start < end)
        {
            swap(matrix[start][j], matrix[end][j]);
            start++;
            end--;
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
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

    rotateMatrix180Clockwise(row, col, matrix);
}