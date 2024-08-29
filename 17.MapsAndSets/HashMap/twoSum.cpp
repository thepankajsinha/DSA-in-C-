#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i]; 
        if (m.find(complement) != m.end()) {
            // If complement is found, return the indices
            return {m[complement], i};
        }
        // Store the index of the current number
        m[nums[i]] = i;
    }
    // If no solution is found, return an empty vector
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    cout << "Indices: " << result[0] << ", " << result[1] <<endl;
    return 0;
}
