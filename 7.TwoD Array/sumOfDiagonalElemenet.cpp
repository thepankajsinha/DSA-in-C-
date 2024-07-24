#include <iostream>
using namespace std;

void sumOfDiagonalElemenet(int row, int col, int matrix[][100])
{
    int mainDiagonalSum = 0;
    int otherDiagonalSum = 0;
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
        if (i == j)
        {
         mainDiagonalSum = mainDiagonalSum + matrix[i][j];
        }

        if (i + j == row -1)
        {
         otherDiagonalSum = otherDiagonalSum + matrix[i][j];
        }
         
       }
       
    }

    cout<<"Sum of main diagonal element: "<<mainDiagonalSum<<endl;
    cout<<"Sum of other diagonal element: "<<otherDiagonalSum;
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

    sumOfDiagonalElemenet(row, col, matrix);
    
}