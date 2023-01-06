/*
  7. Reverse Integer

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:

Input: x = 123
Output: 321

Example 2:

Input: x = -123
Output: -321

*/

class Solution {
public:
    int reverse(int x) {
        if(x>2147483647||x<=-2147483648) return 0;
        stack<int> table;
        int flag=1;
        if(x<0){
            x*=-1;
            flag=-1;
        }
        int result=0,temp=x,n=0;
        while(temp>0){
            table.push(temp%10);
            temp/=10;
        }

        while(!table.empty()){
            if(n==9){
                if(table.top()>2) return 0;
                if(table.top()==2){
                    if(flag==-1){
                        if(result>=147483648) return 0;
                    }
                    if(flag==1){
                        if(result>147483647) return 0;
                    }
                }
            }
            result+=table.top()*pow(10,n);
            table.pop();
            n++;
        }

        return result*flag; 
    }
};
