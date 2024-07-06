#include <iostream>
#include <vector>

using namespace std;

void rotateMatrixKTimes(int matrix[][3], int n, int k)
{
    // Calculate actual number of rotations needed (k modulo 4)
    k = k % 4;

    // Perform k rotations
    while (k)
    {

        // Rotate the matrix
        int transpose[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                transpose[i][j] = matrix[j][i];
            }
        }

        for (int i = 0; i < n; i++)
        {
            int start = 0;
            int end = n - 1;
            while (start < end)
            {
                swap(transpose[i][start], transpose[i][end]);
                start++;
                end--;
            }
        }

        // Copy rotated matrix back to original matrix
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                matrix[i][j] = transpose[i][j];
            }
        }

        k--;
    }
}

// Function to print a matrix
void printMatrix(int matrix[][3], int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int n = 3;
    int k = 1; // Number of rotations

    // Rotate the matrix
    rotateMatrixKTimes(matrix,n, k);

    // Display the rotated matrix
    cout << "Rotated Matrix:" << endl;
    printMatrix(matrix,n);

    return 0;
}
