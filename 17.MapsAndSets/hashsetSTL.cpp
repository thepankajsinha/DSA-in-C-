//unordered_set STL implementation
//It stored unique elements
#include <bits/stdc++.h>
using namespace std;

int main(){
    // Declare an unordered_set of integers
    unordered_set<int> s;


    // Insert elements into the unordered_set
    //T.C - O(1) 
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
 

    // Remove elements from the unordered_set 
    //T.C - O(1) 
    s.erase(5);


    // Print the unordered_set elements
    //T.C - O(n)
    cout << "Unordered Set Elements: ";
    for (int i : s){
        cout << i << " ";
    }
    cout << endl;


    //find size of the unordered_set
    //T.C - O(1)
    cout<<"Size: "<<s.size() << endl;


    // Check if an element exists in the unordered_set
    //T.C - O(1)
    int target = 5;
    if (s.find(target)!= s.end()){
        cout << "Element exists." << endl;
    } else {
        cout << "Element does not exist." << endl;
    }
    return 0;
}