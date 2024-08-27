#include <iostream>
#include <climits>
using namespace std;

void waveForm(int row, int col, int matrix[][100])
{
    //when row is even then print the row normaly
    for (int i = 0; i < row; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < col; j++)
            {
                cout << matrix[i][j] << " ";
            }
        }

        //if row is odd then print the column in reverse order
        else
        {
            for (int j = col - 1; j >= 0; j--)
            {
                cout << matrix[i][j] << " ";
            }
        }
    }
}

int main()
{
    int row, col;
    cout<<"Enter row and column"<<endl;
    cin >> row >> col;

    int matrix[100][100];
    cout<<"Enter elements in matrix"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    waveForm(row, col, matrix);
}