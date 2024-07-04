#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondMax(vector<int> &v){
    
    int maxNo = v[0];
    for (int i = 0; i < v.size(); i++){
        if (v[i] > maxNo){
            maxNo = v[i];
        }
    }
    
    int secondMax = -1;
    for (int i = 0; i < v.size(); i++){
        if (v[i] != maxNo){
            secondMax = max(secondMax, v[i]);
        }
    }
    return secondMax;
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

    int ans = secondMax(v);

    cout << "Second Max element is: " << ans<< endl;
}