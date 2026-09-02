class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pref=strs[0];
        for(int j=1; j<strs.size(); j++){
            int i=0;
            string temp="";
            while(strs[j][i]==pref[i] && i<min(strs[j].size(),pref.size())){
                temp+=strs[j][i];
                i++;
            }
            pref=temp;
            if(pref.size()==0){
                return "";
            }
        }
        return pref;
    }
};