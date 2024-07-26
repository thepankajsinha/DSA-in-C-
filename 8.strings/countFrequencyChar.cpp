#include <bits/stdc++.h>
using namespace std;

void countFrequencyChar(string s){

   vector<int> arr(26,0 );

   for (int i = 0; i < s.size(); i++)
   {
      int idx = s[i] - 'a';
      arr[idx]++;
   }
   
   int maxCount = 0;

   for (int i = 0; i < 26; i++){
      if(arr[i] > maxCount) maxCount = arr[i];
   }

   for (int i = 0; i < 26; i++)
   {
       if(arr[i] == maxCount) cout<<(char)(i + 'a')<<" "<<maxCount<<endl;
   }
   
}

int main()
{

    string s = "leetcode";

    countFrequencyChar(s);
}