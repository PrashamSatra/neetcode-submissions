class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // map<map<char,int>,vector<string>> dist_map;
        // vector<vector<string>> ans;
        // for(string s:strs){
        //     map<char,int> temp_map;
        //     for(char c:s){
        //         temp_map[c]++;
        //     }
        //     dist_map[temp_map].push_back(s);
        // }
        // for(auto [key,value]:dist_map){
        //     ans.push_back(value);
        // }
        // return ans;
        map<vector<int>, vector<string>> groups;

        for (string s : strs) {
            vector<int> count(26, 0);

            for (char c : s) {
                count[c - 'a']++;
            }

            groups[count].push_back(s);
        }

        vector<vector<string>> ans;

        for (auto& [key, group] : groups) {
            ans.push_back(group);
        }

        return ans;
    }
};
