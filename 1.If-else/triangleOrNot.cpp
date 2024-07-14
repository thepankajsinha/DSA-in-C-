#include <iostream>
using namespace std;

void triangleOrNot(int a, int b, int c)
{
    if ((a+b>c)&&(b+c>a)&&(c+a>b)) cout<<"Valid triangle.";
    
    else cout<<"Invalid triangle.";  
}

int main()
{
    int a, b, c;
    cout<<"Enter first side: "<<endl;
    cin>>a;
    cout<<"Enter second side: "<<endl;
    cin>>b;
    cout<<"Enter third side: "<<endl;
    cin>>c;

    triangleOrNot(a,b,c);
}