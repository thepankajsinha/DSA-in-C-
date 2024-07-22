#include <bits/stdc++.h>
using namespace std;

void checkTypeOfTriangle(int side1, int side2, int side3)
{
    if(side1 == side2 == side3) cout<<"Equilateral Triangle";

    else if(side1 == side2 || side2 == side3 || side3 == side1) cout<<"Isosceles Triangle";

    else cout<<"Scalene Triangle";
    
}

int main()
{

    int side1, side2, side3;
    cout << "Enter three sides of triangle: ";
    cin >> side1>>side2>>side3;

    checkTypeOfTriangle(side1, side2, side3);
}