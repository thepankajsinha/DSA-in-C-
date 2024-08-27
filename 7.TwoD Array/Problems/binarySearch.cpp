#include <iostream>
#include <climits>
using namespace std;

int binarySearch(int row, int col, int matrix[][100], int key)
{
    int start = 0, end = row * col - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        int rowIndex = mid / col;
        int colIndex = mid % col;

        if (matrix[rowIndex][colIndex] == key)
        {
            return 1;
        }
        else if (matrix[rowIndex][colIndex] < key)
        {
            start = mid + 1;
        }
        else if (matrix[rowIndex][colIndex] > key)
        {
            end = mid - 1;
        }
    }
    return -1;
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

    int key;
    cin >> key;

    int ans = binarySearch(row, col, matrix, key);
    cout << ans;
}