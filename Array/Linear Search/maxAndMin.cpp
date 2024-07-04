#include <iostream>
#include <vector>
using namespace std;

int maximumElement(vector <int> &v){
    
    int maxNo = v[0];
    for (int i = 0; i < v.size(); i++){
        if (v[i] > maxNo){
            maxNo = v[i];
    }
    }
    return maxNo;
}

int minimumElement(vector <int> &v){

    int minNo = v[0];
    for (int i = 0; i < v.size(); i++){
        if (v[i] < minNo){
            minNo = v[i];
    }

    }
    return minNo;
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

    int maxNo = maximumElement(v);
    int minNo = minimumElement(v);

    cout << "Maximum number is: " << maxNo << endl;
    cout << "Minimum number is: " << minNo << endl;
}