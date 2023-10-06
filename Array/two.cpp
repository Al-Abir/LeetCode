#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;

        for (int i = 0; i < nums.size(); i++) {
            int temp = target - nums[i];
            if (m.find(temp) != m.end()) {
                return {m.find(temp)->second, i};
            }
            m[nums[i]] = i; // insert into hash table
        }
        return {};
    }
};

int main() {
    // Example usage
    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = solution.twoSum(nums, target);

    if (!result.empty()) {
        cout <<"["<< result[0] << "," << result[1] <<"]"<< endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
  //time complexity 0(n);
//--------------------------------------------------------



/* #include<bits/stdc++.h>
   using namespace std;

   int main(){


    int arr[]={3,2,4};
    int size =sizeof(arr)/sizeof(arr[0]);

    int target =6;

    for(int i=0;i<size; i++){
        for(int j =i+1; j<size; j++){
            if(arr[i]+arr[j]==target){
                cout<< i <<"position "<< j;
            }

        }

    }
    cout<<endl;

    return 0;
}
 // time complexity n^2;
*/
