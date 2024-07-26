#include <bits/stdc++.h>
using namespace std;

int largeNumberFactorial(int num)
{
    vector<int>ans(1,1);

    while (num > 1)
    {
        int carry = 0, result, size = ans.size();

        for (int i = 0; i < size; i++)
        {
            result = ans[i]*num + carry;
            carry = result / 10;
            ans[i] = result % 10;
        }
        
        while (carry != 0)
        {
            ans.push_back(carry % 10);
            carry = carry / 10;
        }
        num--;
    }
    
    reverse(ans.begin(), ans.end());

    for (int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }

}

int main()
{
    int num = 8;
    largeNumberFactorial(num);
}
