//note- vectors are passed in function as pass by value

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // how to declare and initialize the vector
    // method 1
    vector<int> v;

    // method 2 : vector <int> v(5);
    // method: vector <int> v = {10,20,30,40,50};

    // insert elements into vector one by one at the end
    v.push_back(10);
    v.push_back(25);
    v.push_back(13);
    v.push_back(8);
    v.push_back(5);



    // print output
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout<< endl;
    // Output- 10 25 13 8 5



    // insert element at specific index
    v.insert(v.begin() + 1, 222);

    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout<< endl;
    // Output- 10 222 25 13 8 5




    // Take user input
    for (int i = 0; i < v.size(); i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }




    // update value
    v.at(0) = 1;
     for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }




    // delete single element from back
    v.pop_back();




    // delete all element
    v.clear();



    // delete element at specific index
    v.erase(v.begin() + 2);



    // print first element
    v.front();



    // print last element
    v.back();



    // to check vector is empty or not
    cout << v.empty();



    // vector size
    v.size();



    // vector capacity
    v.capacity();



    // sort vector elements in ascending order
    sort(v.begin(), v.end());



    // sort vector elements in descending order
    sort(v.rbegin(), v.rend());


    // reverse vector elements
    reverse(v.begin(), v.end());



    // search in vector
    binary_search(v.begin(), v.end(), 5);


}