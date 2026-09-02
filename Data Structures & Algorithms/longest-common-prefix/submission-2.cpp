class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pref=strs[0];
        for(int j=1; j<strs.size(); j++){
            int i=0;
            while(strs[j][i]==pref[i] && i<min(strs[j].size(),pref.size())){
                i++;
            }
            pref=pref.substr(0,i);
            if(pref.empty()){
                return "";
            }
        }
        return pref;
    }
};