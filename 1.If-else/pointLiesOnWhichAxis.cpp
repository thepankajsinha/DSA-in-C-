#include <iostream>
using namespace std;

void pointLiesOnWhichAxis(float x, float y)
{

    if (x == 0 && y == 0)
    {
        cout << "coordinates lies on origin.";
    }
    else if (x == 0 && y != 0)
    {
        cout << "coordinates lies on y axis.";
    }
    else if (x != 0 && y == 0)
    {
        cout << "coordinates lies on x axis.";
    }
    else{
        cout << "coordinates lies on plane.";
    }
}

int main()
{

    float x, y;
    cout << "Enter x and y coordinates: ";
    cin >> x>> y;

    pointLiesOnWhichAxis(x, y);
}