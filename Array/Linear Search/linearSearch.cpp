#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector <int> &v, int key){
    for (int i = 0; i < v.size(); i++){
        if (v[i]==key){
            return i;
        }
    }
    return -1;
}
int main()
{
    int size;
    cout<<"Enter size: ";
    cin>>size;

    vector <int> v(size);
    cout<<"Enter array elements: ";
    
    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];
    }
    

    int key;
    cout<<"Enter key element: ";
    cin>>key;

    int ans = linearSearch(v, key);
    cout<<ans;
}