#include <bits/stdc++.h>
using namespace std;

void matrixMultiply(int matrix1[][3], int matrix2[][4]){

    int result[2][4];

    for(int i=0; i<2; i++){

        for(int j=0; j<4; j++){

            // Multiply each row of matrix1 with each column of matrix2, and sum them up.
            result[i][j] = 0;
            for(int k=0; k<3; k++){
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }


    // Print the resulting matrix
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

int main(){

    int matrix1[2][3] = {1,2,3,4,5,6};

    int matrix2[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    matrixMultiply(matrix1, matrix2);
}