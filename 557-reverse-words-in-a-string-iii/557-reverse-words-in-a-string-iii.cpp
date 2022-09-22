class Solution {
public:
    string reverseWords(string s) {
        stack<char> stack;
        string result="";
        for(char i:s){
            if(i!=' '){
                stack.push(i);
            }else{
                while(!stack.empty()){
                    result+=stack.top();
                    stack.pop();
                }
                result+=' ';
            }
        }
        while(!stack.empty()){
                    result+=stack.top();
                    stack.pop();
        }
        return result;
    }
};