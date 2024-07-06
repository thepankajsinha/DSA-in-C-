#include <iostream>
#include <climits>
using namespace std;

void waveForm(int row, int col, int matrix[][100])
{
    for (int j = 0; j < col; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < row; i++)
            {
                cout << matrix[i][j] << " ";
            }
        }
        else
        {
            for (int i = row - 1; i >= 0; i--)
            {
                cout << matrix[i][j] << " ";
            }
        }
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

    waveForm(row, col, matrix);
}