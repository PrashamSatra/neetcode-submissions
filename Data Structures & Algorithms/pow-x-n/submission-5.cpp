class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(n==1) return x;
        int a=abs(n);
        double prod=1;
        while (a > 0) {
            if (a % 2 == 1)
            prod *= x;
            x *= x;
            a /= 2;
            }
        if(n>0) return prod;
        else return double(1/prod);
    }
};
