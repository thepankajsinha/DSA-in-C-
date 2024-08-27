#include <iostream>
#include <climits>
using namespace std;

void transposeMatrix(int row, int col, int matrix[][100])
{


    int transpose[100][100];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           transpose[i][j] = matrix[j][i];
        }
        cout<<endl;
    }
    cout << "Transpose of the matrix is: " << endl;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++)
        {
            cout<<transpose[i][j]<<" ";
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