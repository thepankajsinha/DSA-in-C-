#include <iostream>
#include <string>
using namespace std;

// 3862
string integerToRoman(int num)
{
    string ans = "";

    string ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};

    string hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};

    string thousands[] = {"", "M", "MM", "MMM"};

    ans = ans + thousands[num / 1000];
    //3862/1000 = 3  -->  thounand[3] = MMM  --> ans = MMM

    ans = ans + hundreds[(num % 1000) / 100];
    //(3862 % 1000)/100 = 8  -->  hundreds[8] = DCCC  --> ans = MMMDCCC

    ans = ans + tens[(num % 100) / 10];
    //(3862 % 100)/10 = 6 -->  tens[6] = LX  --> ans = MMMDCCCLX

    ans = ans + ones[num % 10];
    //(3862 % 10) = 2 -->  ones[2] = II  --> ans = MMMDCCCLXII

    return ans;
}

int main()
{
    int num = 3862;
    cout << integerToRoman(num);
}