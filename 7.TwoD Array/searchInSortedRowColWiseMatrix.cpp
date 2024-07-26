
#include <iostream>
#include <climits>
using namespace std;

int searchInSortedRowColWiseMatrix(int row, int col, int matrix[][100], int key)
{
    int i = 0;
    int j = col - 1;
    
    while (i < row && j >=0)
    {
        if (matrix[i][j] == key)
        {
            return 1;
        }
        else if (matrix[i][j] < key)
        {
            i++;
        }
        else if (matrix[i][j] > key)
        {
            j--;
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

    int ans = searchInSortedRowColWiseMatrix(row, col, matrix, key);
    cout << ans;
}