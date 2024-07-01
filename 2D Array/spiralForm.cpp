#include <iostream>
#include <climits>
using namespace std;

void spiralForm(int row, int col, int matrix[][100])
{
    int rowStart = 0, rowEnd = row-1, colStart = 0, colEnd = col - 1;

    while (rowStart <= rowEnd && colStart <= colEnd)
    {
        //print top row
        for (int col = colStart; col <= colEnd; col++)
        {
            cout<<matrix[rowStart][col]<<" ";
        }
        rowStart++;

        //print right column
        for (int row = rowStart; row <= rowEnd; row++)
        {
            cout<<matrix[row][colEnd]<<" ";
        }
        colEnd--;

        //print bottom row
        for (int col = colEnd; col >= colStart; col--)
        {
            cout<<matrix[rowEnd][col]<<" ";
        }
        rowEnd--;

         //print left column
        for (int row = rowEnd; row >= rowStart; row--)
        {
            cout<<matrix[row][colStart]<<" ";
        }
        colStart++;
        
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

    spiralForm(row, col, matrix);
}