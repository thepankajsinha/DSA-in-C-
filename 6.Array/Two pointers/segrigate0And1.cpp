#include <iostream>
#include <vector>
using namespace std;

void segrigate0And1(vector<int> &v){
    int start =0, end =v.size()-1;

    while (start<=end)
    {
        if (v[start]== 1 && v[end]==0)
        {
            swap(v[start], v[end]);
        }
        else if (v[start]==0)
        {
            start++;
        }
        else if (v[end]==1)
        {
            end--;
        } 
    } 
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
    cout << "Enter size: ";
    cin >> size;

    vector<int> v(size);
    cout << "Enter array elements: ";

    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    segrigate0And1(v);  
    display(v);  
}