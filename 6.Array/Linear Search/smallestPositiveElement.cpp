#include <bits/stdc++.h>
#include <vector>
using namespace std;

int smallestPositiveElement(vector<int> arr)
{
    int smallestPositiveElement = 1;

    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == smallestPositiveElement) smallestPositiveElement++;
    }

    return smallestPositiveElement;
}
int main()
{

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int ans = smallestPositiveElement(arr);
    cout << ans;
}