class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>,vector<string>> dist_map;
        vector<vector<string>> ans;
        for(string s:strs){
            map<char,int> temp_map;
            for(char c:s){
                temp_map[c]++;
            }
            dist_map[temp_map].push_back(s);
        }
        for(auto [key,value]:dist_map){
            ans.push_back(value);
        }
        return ans;
    }
};
