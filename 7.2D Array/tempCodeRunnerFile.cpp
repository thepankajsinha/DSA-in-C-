 for (int i = 0; i < row-1; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
           swap(matrix[i][j], matrix[j][i]);
        }
        cout<<endl;
    }