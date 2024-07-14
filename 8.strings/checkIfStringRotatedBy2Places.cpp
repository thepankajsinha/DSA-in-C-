#include <iostream>
#include <string>
using namespace std;

void rotateClockwise(string &str)
{
    char c = str[str.size() - 1];
    int index = str.size() - 2;
    while (index >= 0)
    {
        str[index + 1] = str[index];
        index--;
    }
    str[0] = c;
}

void rotateAntiClockwise(string &str)
{
    char c = str[0];
    int index = 1;
    while (index < str.size())
    {
        str[index - 1] = str[index];
        index ++;
    }
    str[str.size()-1] = c;
}

int main()
{
    string str1, str2;
    cin>>str1>>str2;

    if(str1.size()!=str2.size()) return 0;

    string clockwise = str1;
    string anticlockwise = str1;

    rotateClockwise(clockwise);
    rotateClockwise(clockwise);
    if(clockwise==str2)
    return 1;
    cout<<1;

    rotateAntiClockwise(anticlockwise);
    rotateAntiClockwise(anticlockwise);
    if(anticlockwise==str2)
    return 1;
    cout<<1;

}