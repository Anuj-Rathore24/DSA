class Solution {
public:
    int maxDepth(string s) {
        // stack<char> stack;
        int temp=0,result=0;
        for(char t:s){
            if(t=='('){
                temp++;
                if(result<temp) result=temp;
            }else if(t==')'){
                temp--;
            }
        }
        return result;
    }
};