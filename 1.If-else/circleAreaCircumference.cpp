#include <bits/stdc++.h>
using namespace std;

void circleAreaCircumference(int radius){

    int Area = 3.14 * radius * radius;

    int Circumference = 2 * 3.14 * radius;

    if( Area > Circumference) cout<<"Area is greater than Circumference.";

    else cout<<"Circumference is greater than Area.";
}

int main(){

    int radius;
    cout<<"Enter a radius: ";
    cin>>radius;

    circleAreaCircumference(radius);
}