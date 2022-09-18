class Solution {
public:
    double myPow(double x, int n) {
        if(x==0) return 0;
        if(x==1) return 1;
        if(x==-1){
            if(n%2) return -1;
            return 1;
        }
        if(x<1 && n==INT_MAX) return 0;
        if(n==INT_MIN) return 0;
        
        if(n>0){
            if(n==1) return x;
            return x*myPow(x,n-1);
        }
        else if(n<0){
            if(n==-1) return 1/x;
            return 1/x*myPow(x,n+1);
        }
        return 1;
    }
};