class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(int start, vector<int> curr, vector<int>nums){
        ans.push_back(curr);
        for(int i= start; i<nums.size();i++){
            curr.push_back(nums[i]);
            backtrack(i+1,curr,nums);
            curr.pop_back();
        }
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        backtrack(0,{},nums);
        return ans;
    }
};
