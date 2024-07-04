#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int missingNumber(vector <int> &v){
    
    //sum of all elemenmts in an array
    int sum = 0;
    for (int i = 0; i < v.size(); i++){
        sum = sum + v[i];
    }
    
    //sum of first n numbers
    int n = v.size()+1;
    int ans = (n*(n+1))/2;

    return ans - sum;

}

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;

    vector <int> v(size);
    cout<<"Enter array elements: ";
    
    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];
    }
    
    int missNo = missingNumber(v);

    cout<< "Missing Number is: " <<missNo<< endl;
}