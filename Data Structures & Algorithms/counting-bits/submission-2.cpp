class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> bits(n + 1, 0);
        if(n==0){
            return {0};
        }

        int power = 1;

        for (int i = 1; i <= n; i++) {
            if (i == power * 2) {
                power *= 2;
            }

            bits[i] = bits[i - power] + 1;
        }

        return bits;
    }
};