#include <iostream>
using namespace std;

int squareRoot(int x){
    int start = 0;
    int end = x;
    int ans;
    
    while (start <= end){
        int mid = (start + end)/2;

        if (mid*mid==x){
            ans = mid;
            break;
        }
        else if (mid*mid < x){
            ans = mid;
            start = mid + 1;
        }
        else if (mid*mid > x){
            end = mid - 1;
        }  
    }
    return ans;    
}

int main(){
    
int x;
cout<<"Enter a value: ";
cin>>x;

int ans = squareRoot(x);
cout<<ans;

}