// print the triplet whose sum is equal to the given value x

#include <bits/stdc++.h>
using namespace std;

int threeSum(vector<int> &v, int sum)
{
   for (int i = 0; i < v.size(); i++){

      for (int j = i + 1; j < v.size(); j++){

          for (int k = j + 1; k <v.size(); k++){

              if(v[i] + v[j] + v[k] == sum) cout << "Triplet: " << v[i] << " " << v[j] << " " << v[k] << endl;
          }
          
      }
      
   }
}

int main()
{

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> v;
    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int sum;
    cout<<"Enter target sum: ";
    cin>>sum;

    cout<<threeSum(v, sum);

}