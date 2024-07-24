#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

//transpose a matrix without using an extra matrix
void inplaceTranspose(int row, int col, int matrix[][100])
{

    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
           if(i != j){
            swap(matrix[i][j], matrix[j][i]);
           }
        }
        cout<<endl;
    }

    cout << "Transpose of the matrix is: " << endl;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main()
{
    int row, col;
    cout<<"Enter row and column for square matrix: ";
    cin >> row >> col;

    int matrix[100][100];
    cout<<"Enter matrix elements: "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    inplaceTranspose(row, col, matrix);
}