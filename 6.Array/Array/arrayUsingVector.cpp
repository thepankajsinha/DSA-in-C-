// Vectors are passed in function as pass by value

#include <bits/stdc++.h>
using namespace std;

void display(vector<int> v){
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Vector declarationsb and initialization
    //  method 1
    vector<int> v;

    // method 2 : vector <int> v(5);
    // method 3: vector <int> v = {10,20,30,40,50};

    // insert elements at end
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    display(v);   //1 2 3 4 5


    // insert element at specific index
    v.insert(v.begin() + 1, 10);
    display(v);  //1 10 2 3 4 5


    // update value
    v.at(5) = 20;
    display(v);  //1 10 2 3 4 20


    // print first element
    v.front();
    cout <<"Front: "<< v.front() << endl;  //1


    // print last element
    v.back();
    cout <<"End: "<< v.back() << endl;  //20
    

    // vector size
    v.size();
    cout <<"Size: "<< v.size() << endl;  //6


    // vector capacity
    v.capacity();
    cout <<"Capacity: "<< v.capacity() << endl;  //8


    // sort elements in ascending order
    sort(v.begin(), v.end());
    display(v);  //1 2 3 4 10 20


    // sort elements in descending order
    sort(v.rbegin(), v.rend());
    display(v);  //20 10 4 3 2 1


    // reverse vector elements
    reverse(v.begin(), v.end());
    display(v);  //1 2 3 4 10 20


    // search in vector
    cout<<"Found 5: "<<(binary_search(v.begin(), v.end(), 5)? "Yes" : "No")<<endl;  //Found 5: No


    // delete single element from end
    v.pop_back();
    display(v);  //1 2 3 4 10


    // delete element at specific index
    v.erase(v.begin() + 2);
    display(v);  //1 2 4 10


    // delete all element
    v.clear();
    display(v);  //empty vector


    // to check vector is empty or not
    cout << "Vector is empty: " << (v.empty()?"Yes":"No") << endl;  //Vector is empty: Yes


    // Take user input
    for (int i = 0; i < v.size(); i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
}