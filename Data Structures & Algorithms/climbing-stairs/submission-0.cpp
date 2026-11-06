class Solution {
public:
    int climbStairs(int n) {
        vector<int> res = {1,2};
        if(n<=2){
            return res[n-1];
        }
        for(int i=2;i<=n-1;i++){
            res.push_back(res[i-1]+res[i-2]);
        }
        return res[n-1];

    }
};
