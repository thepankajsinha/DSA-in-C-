#include <iostream>
#include <vector>
using namespace std;

void reversePart(int i, int j , vector<int> &v)
{
    int start = i;
    int end = j;

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
     int n =v.size();

    int k;
    cout << "Enter value of k: ";
    cin >> k;

    if(k > n) k = k % n;

    display(v);

    cout<<endl;

    reversePart(0, n-k-1, v);
    reversePart(n-k, n-1, v);
    reversePart(0, n-1, v);

    display(v);
    return 0;
}