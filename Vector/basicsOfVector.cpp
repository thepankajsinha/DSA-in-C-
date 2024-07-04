#include <iostream>
#include <vector>

using namespace std;

int main(){
    //how to declare and initialization vector
    //method 1
    vector <int> v;

    //method 2 : vector <int> v(5);
    //method: vector <int> v = {10,20,30,40,50};
    
    //insert element in vector
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    //insert element at specific index
    v.insert(v.begin()+1, 10);

    //print output
    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }

    // Take user input
    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];
    }

    //update value
    v[0]=10;

    //delete single element from back
    v.pop_back();

    //delete all element
    v.clear();

    //delete element at specific index
    v.erase(v.begin() + 2);

    //print first element
    v.front();

    //print last element
    v.back();


    //to check vector is empty or not
    cout<<v.empty();

    //vector size
    v.size();

    //vector capacity
    v.capacity();

    //sorting increasing order
    sort(v.begin(), v.end());

    //sorting decreasing order
    sort(v.rbegin(), v.rend());

    //search in vector
    binary_search(v.begin(), v.end(),5);
    
    //iterator in vector
    //This is also an vector   

}