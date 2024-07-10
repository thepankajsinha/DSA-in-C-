#include <iostream>
using namespace std;

void solidRectangle(int row, int col){
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    
}

int main()
{
    cout << "Enter no. of rows: ";
    int row;
    cin >> row;

    cout<< "Enter no. of columns: ";
    int col;
    cin >> col;

    solidRectangle(row,col);
}