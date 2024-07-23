#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &v)
{
    int start = 0;
    int end = v.size() - 1;

    while (start < end)
    {
        swap(v[start], v[end]);
        start++;
        end--;
    }
}

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    vector<int> v(size);
    cout << "Enter array elements: ";

    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    reverseArray(v);
    display(v);
    return 0;
}