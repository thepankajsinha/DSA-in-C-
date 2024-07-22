#include <bits/stdc++.h>
using namespace std;

void printASCIIValue(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<(char)(i + 'A')<<" -> "<<(i + 'A')<<"  "<<(char)(i + 'a')<<" -> "<<(i + 'a')<<endl;
    }
    
}

int main()
{
    int n = 26;
    printASCIIValue(n);
}