class Solution {
public:
    int climbStairs(int n) {
        int result=0,a=0,b=1;
        for(int i=0;i<n;i++){
            result=a+b;
            a=b;
            b=result;
        }
        return result;
    }
};