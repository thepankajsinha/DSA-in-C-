#include <iostream>
#include <climits>
using namespace std;

//given matrix -> inplace transpose -> rowwise reverse the matrix
void rotateMatrix90Clockwise(int row, int col, int matrix[][100])
{

    //transpose the given matrix
    int transpose[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }


    //reverse each row of the transposed matrix
    for (int k = 0; k < row; k++){  //traverse each row of the transposed matrix
        
        int i = 0;  //point to the first indext of first row
        int j = col - 1;  //point to the last indext of first row

        while (i < j)
        {
            //swap elements
            swap(transpose[k][i], transpose[k][j]);

            i++;
            j--;
        }
    }

    //print the matrix after rotation
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
    cout << "Enter the number of rows and columns: ";
    cin >> row >> col;

    int matrix[100][100];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    rotateMatrix90Clockwise(row, col, matrix);
}