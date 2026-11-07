class Solution {
public:
    int house_rob_linear(vector<int> nums){
        int n = nums.size();
        vector<int> dp(n,0);
        dp[0]=nums[0];
        dp[1]=nums[1]; //not making safe if cases for n=1,n=2,n=3, because function called below will return before any of this happens
        dp[2]=nums[0]+nums[2];
        for(int i=3; i<n;i++){
            dp[i] = nums[i]+max(dp[i-2],dp[i-3]);
        }
        return max(dp[n-1],dp[n-2]);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);
        if(n==3) return max(nums[0],max(nums[1],nums[2]));
        int taking_first = house_rob_linear(vector<int>(nums.begin(), nums.end()-1));
        int taking_last =  house_rob_linear(vector<int>(nums.begin()+1, nums.end()));
        return max(taking_first,taking_last);
    }
};
