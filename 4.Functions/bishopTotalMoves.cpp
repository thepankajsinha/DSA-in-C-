#include <bits/stdc++.h>
using namespace std;

void bishopTotalMoves(int A, int B)
{
    int totalMoves = 0;
    // top left total moves
    int topLeft = min(A - 1, B - 1);
    totalMoves = totalMoves + topLeft;

    // top right total moves
    int topRight = min(A - 1, 8 - B);
    totalMoves = totalMoves + topRight;

    // bottom left total moves
    int bottomLeft = min(8 - A, B - 1);
    totalMoves = totalMoves + bottomLeft;

    // bottom right total moves
    int bottomRight = min(8 - A, 8 - B);
    totalMoves = totalMoves + bottomRight;

    cout<<totalMoves;
}

int main()
{
    cout << "Enter two number number:";
    int a, b;
    cin >> a >> b;

    bishopTotalMoves(a, b);
}