class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(vector<int> nums, vector<int> curr, int start){
        ans.push_back(curr);
        for(int i=start;i<nums.size();i++){
            if(i>start && nums[i]==nums[i-1]){
                continue;
            }
            curr.push_back(nums[i]);
            backtrack(nums,curr,i+1);
            curr.pop_back();
        }
        return;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        backtrack(nums,{},0);
        return ans;
    }
};
