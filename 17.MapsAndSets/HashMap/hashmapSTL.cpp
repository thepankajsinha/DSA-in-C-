//unordered_map STL implementation
//It stored unique elements
#include <bits/stdc++.h>
using namespace std;

int main(){

    // Declare an unordered_map
    unordered_map<string, int> m;


    // Insert elements into the unordered_map
    //T.C - O(1) 
    m["Pankaj"] = 1;
    m["Anuj"] = 2;


    // Print the unordered_map elements
    //T.C - O(n)
    for (auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout << endl;
    //Anuj 2
    //Pankaj 1


    //find size of the unordered_map
    //T.C - O(1)
    cout<<"Size: "<<m.size() << endl;
    //Size: 2


    // Remove elements from the unordered_map 
    //T.C - O(1) 
    m.erase("Pankaj");


    // Check if an element exists in the unordered_map
    //T.C - O(1)
    string target = "Anuj";
    if (m.find(target)!= m.end()){
        cout << "Element exists." << endl;
    } else {
        cout << "Element does not exist." << endl;
    }
    //Element exists.

    
    return 0;
}