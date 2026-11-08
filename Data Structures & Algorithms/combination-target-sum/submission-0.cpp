class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(vector<int> nums, int target, vector<int> curr, int sum_so_far,int start){
        if(sum_so_far==target){
            ans.push_back(curr);
            return;
        }
        else if(sum_so_far>target){
            return;
        }
        else{
            for(int i=start;i<nums.size();i++){
                curr.push_back(nums[i]);
                backtrack(nums,target,curr,sum_so_far+nums[i],i);
                curr.pop_back();
            }
        }
        
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        backtrack(nums,target,{},0,0);
        return ans; 
    }
};
