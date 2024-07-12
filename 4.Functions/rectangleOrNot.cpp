#include <bits/stdc++.h>
using namespace std;

void validReactangle(int a, int b, int c, int d){
    if((a==b && c==d)||(a==c && b==d)|| (a==d && b==c)) cout<<"Valid Rectangle";
    else cout<<"Not valid";
}

int main()
{
    cout << "Enter four number:";
    int a,b,c,d;
    cin >> a>>b>>c>>d;

    validReactangle(a,b,c,d);
}