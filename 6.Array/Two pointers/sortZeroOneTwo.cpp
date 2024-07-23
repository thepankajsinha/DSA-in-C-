#include <iostream>
#include <vector>
using namespace std;


//method 1 -> Two pass method
void sortZeroOneTwo(vector<int> &v){

    int noOfZeros = 0;
    int noOfOnes = 0;
    int noOfTwos = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]==0) noOfZeros++;
        if (v[i]==1) noOfOnes++;
        if (v[i]==2) noOfTwos++;
    }

    for (int i = 0; i < v.size(); i++)
    {
        if(i < noOfZeros) v[i] = 0;
        else if(i < (noOfZeros + noOfOnes)) v[i] = 1;
        else v[i] = 2;
    }
    
    
}

//method 2 -> Two pass method

void sortZeroOneTwo(vector<int> &v){
    int start = 0, mid = 0, end =v.size()-1;

    while (mid<=end)
    {
        if (v[mid]== 2)
        {
            swap(v[mid], v[end]);
            end--;
        }
        else if (v[mid]==0)
        {
            swap(v[start], v[mid]);
            start++;
            mid++;
        }
        else if (v[mid]==1)
        {
            mid--;
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

    sortZeroOneTwo(v);  
    display(v);
}