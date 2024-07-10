#include <iostream>
using namespace std;

int main()
{

    cout << "**Calculator**" << endl;
    cout << "Only +,-,*,/ operators allowed."<<endl;

    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    char operators;
    cout << "Enter an operator ";
    cin >> operators;

    switch (operators)
    {
    case '+':
        cout << "Addition is: " << num1 + num2 << endl;
        break;

    case '-':
        cout << "Subtraction is: " << num1 - num2 << endl;
        break;

    case '*':
        cout << "Product is : " << num1 * num2 << endl;
        break;

    case '/':
        cout << "Division is: " << num1 / num2 << endl;
        break;

    case '%':
        cout << "Remainder is : " << num1 % num2 << endl;
        break;

    default:
        cout << "Enter valid operator. " << endl;
        break;
    }

    return 0;
}