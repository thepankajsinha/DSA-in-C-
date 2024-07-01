#include <iostream>
#include <climits>
using namespace std;

void transposeMatrix(int row, int col, int matrix[][100])
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           cout<<matrix[j][i]<<" ";
        }
        cout<<endl;
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

    transposeMatrix(row, col, matrix);
}