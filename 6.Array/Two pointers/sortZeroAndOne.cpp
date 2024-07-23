#include <iostream>
#include <vector>
using namespace std;

void sortZeroAndOne(vector<int> &v){
    int start = 0, end =v.size()-1;

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

    vector<int> v;
    cout << "Enter array elements: ";

    for (int i = 0; i < v.size(); i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sortZeroAndOne(v);  
    display(v);
}