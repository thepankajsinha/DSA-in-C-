#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;

    int *ptr1 = &a;
    int *ptr2 = &b;

    int ans = *ptr1 + *ptr2;
    cout << "Sum of " << *ptr1 << " and " << *ptr2 << " is: " << ans << endl;
}