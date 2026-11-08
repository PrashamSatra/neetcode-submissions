class Solution {
public:
    vector<string> ans;
    void backtrack(int n, string curr, int open, int close){
        if(curr.size()==2*n){
            ans.push_back(curr);
            return;
        }
        if(open<n){
            backtrack(n, curr+'(' , open+1, close); //never actually changing curr
        }
        if(close<open){
            backtrack(n,curr+')',open,close+1);
        }
    }
    vector<string> generateParenthesis(int n) {
        backtrack(n,"",0,0);
        return ans;
    }
};


