#include <bits/stdc++.h>
using namespace std;

string addString(string num1, string num2)
{

    //take two variable i, j to store indexes of given string
    int i = num1.size() - 1;
    int j = num2.size() - 1;

    int sum=0;
    int carry = 0;
    string ans;

    while (j >= 0)
    {
        sum = (num1[i] - '0') + (num2[j] - '0') + carry;
        carry = sum / 10;
        ans = ans + to_string(sum % 10);
        j--;
        i--;
    }

    while (i >= 0)
    {
        sum = num1[i] - '0' + carry;
        carry = sum / 10;
        ans = ans + to_string(sum % 10);
        i--;
    }

    if(carry) ans = ans + '1';
    reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{

    string num1, num2;
    cin >> num1 >> num2;

    if (num1.size() > num2.size())
        cout<<addString(num1, num2);

    else
        cout<<addString(num2, num1);
}