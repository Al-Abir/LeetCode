#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
     vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        backtrack(nums, 0, result);
        return result;
    }

private:
    void backtrack(std::vector<int>& nums, int start, std::vector<std::vector<int>>& result) {
        if (start == nums.size()) {
            // If all elements are used, add the current permutation to the result
            result.push_back(nums);
            return;
        }

        for (int i = start; i < nums.size(); i++) {
            // Swap the current element with the element at index 'start'
              swap(nums[start], nums[i]);

            // Recursively generate permutations for the remaining elements
            backtrack(nums, start + 1, result);

            // Backtrack by undoing the swap
               swap(nums[start], nums[i]);
        }
    }
};

int main() {
    Solution solution; //class create and object create.
    vector<int> nums = {1, 2, 3};
     vector<vector<int>> output = solution.permute(nums);

    // Print the result
    for (const auto& permutation : output) {
         cout << "[";
        for (int num : permutation) {
           cout << num << ",";
        }
        cout << "], ";
    }

    return 0;
}



