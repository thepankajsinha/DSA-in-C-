#include <iostream>
using namespace std;

int main()
{

    // self declaration and self initialization
    int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // self declaration and user input initialization
    int m, n;
    cin >> m >> n;

    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing row wise output
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //print column wise output
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    //update an element
    arr[3][2]=10;

    //access an element
    cout<<arr[3][3];

    //search an element in matrix
    int x;
    cin>>x;
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j]==x)
            {
                cout<<"Element found.";
            }
            
        }

    }
}