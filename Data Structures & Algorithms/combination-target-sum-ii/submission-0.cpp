class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(vector<int> candidates, int target, vector<int>curr, int sum_so_far, int start,vector<int> visited){
        if(sum_so_far==target){
            ans.push_back(curr);
            return;
        }
        else if(sum_so_far>target){
            return;
        }
        else{
            for(int i=start;i<candidates.size();i++){
                if (find(visited.begin(), visited.end(), candidates[i]) == visited.end()){
                    curr.push_back(candidates[i]);
                }
                else{
                    continue;
                }
                backtrack(candidates,target,curr,sum_so_far+candidates[i],i+1,visited);
                visited.push_back(candidates[i]);
                curr.pop_back();
                //backtr
                //visited
                //pop
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        backtrack(candidates,target,{},0,0,{});
        return ans;
    }
};
