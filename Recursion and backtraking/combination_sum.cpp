#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<vector<int>> ans;
     void helper(vector<int>& candidates, int target, int i, int cursum,vector<int> temp ){

        // condition
        if(cursum>target){
            return;
        }
        //base condition all element  empty check;
        if(i==candidates.size()){
            return;
        }
        if(cursum==target){
           ans.push_back(temp);
           return;
        }
        //include
        cursum +=candidates[i];
        temp.push_back(candidates[i]);
        helper(candidates,target,i,cursum,temp);
        cursum-=candidates[i];
        temp.pop_back();
        //Exclution
        helper(candidates,target,i+1,cursum,temp);

     }

    vector<vector<int>> combinationSum(vector<int> candidates, int target){

         vector<int>temp;
         helper(candidates,target,0,0,temp);
         return ans;         

       

    }



};
int main(){
    
    Solution solution;
     vector<int> candidates ={2,3,6,7};
     int target = 7;

    vector<vector<int>> result = solution.combinationSum(candidates,target);

     
     for(const auto& combination: result){
        cout<<"[";
        for(int num : combination){
            cout<< num <<" ";
        }cout <<"]";
     }
    return 0;
}