class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> cy_set;
        int to_sos=n;
        int sos=0;
        while(sos!=1){
            sos=0;
            while(to_sos>0){
                sos+=pow((to_sos%10),2);
                to_sos=int(to_sos/10);
            }
            if(cy_set.find(sos)==cy_set.end()){
                cy_set.insert(sos);
            }
            else{
                return false;
            }
            to_sos=sos;
        }
        return true;
    }
};
