#include <bits/stdc++.h>
using namespace std;

void lowerBound(vector<int> &v, int key){

    int start = 0;
    int end = v.size()-1;
    bool flag = false;
    
    while (start <= end){
        int mid = (start + end)/2;

        if (v[mid]==key){
            //if element is found then upper bound will be mid+1 element
            flag = true;
            cout<<v[mid+1];
        }
        else if (v[mid] < key){
            start = mid + 1;
        }
        else if (v[mid] > key){
            end = mid - 1;
        }  
    }
    //if element is not found then lower bound will be start element
      if(flag==false) cout<<v[start];
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

    int key;
    cout<<"Enter key element: ";
    cin>>key;

   lowerBound(v, key);
}

//Ex:
//arr = {10,20,30,40,50}, key = 25
//upper bound of 25 is 30

//arr = {10,20,30,40,50}, key = 40
//upper bound of 25 is 50