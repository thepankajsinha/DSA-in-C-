//Rotate array by 1
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void rotateArray(vector <int> &v){
    int lastElement= v[v.size()-1];

    for (int i = v.size()-2; i >= 0; i--){
        
       v[i+1] = v[i];
    }

    v[0] = lastElement;

}

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
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

    rotateArray(v);
    display(v);
}