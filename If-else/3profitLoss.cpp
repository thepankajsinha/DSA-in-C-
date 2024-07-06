#include <iostream>
using namespace std;

void profitLoss(int cp, int sp)
{
    if (sp > cp)
    {
        cout <<"Profit "<<sp-cp;
    }
    else if (sp == cp)
    {
        cout<<"No profit and No loss";
    }
    else
    {
        cout <<"Loss "<<cp-sp;
    }
}

int main()
{
    cout << "Enter the cost price: ";
    int cp;
    cin >> cp;

    cout << "Enter the selling price: ";
    int sp;
    cin >> sp;

    profitLoss(cp, sp);
}