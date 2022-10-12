// Given a non-negative integer x, compute and return the square root of x.

// Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.

// Note: You are not allowed to use any built-in exponent function or operator, such as pow(x, 0.5) or x ** 0.5.

 

// Example 1:

// Input: x = 4
// Output: 2

// Solution -:

class Solution {
public:
    int mySqrt(int x) {
        int result=0;
        if(x==1) return 1;
        for(long i=0;i<x;i++){
            if(i*i>x){
                return result;
            }else{
                result=i;
            }
        }
        return result;
    }
};
