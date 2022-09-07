class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stack,stack2;
        for(int i=0;i<s.length();i++){
            if(s.at(i)=='#') {
                if(!stack.empty()) stack.pop();
            }
            else{
                stack.push(s.at(i));
            }
        }
        for(int i=0;i<t.length();i++){
            if(t.at(i)=='#') {
                if(!stack2.empty()) stack2.pop();
            }
            else{
                stack2.push(t.at(i));
            }
        }
        int flag=0;
        while(true){
            if(stack.empty()||stack2.empty()) break;
            if(stack.top()!=stack2.top()){
                flag=1;
                break;
            }
            stack.pop();
            stack2.pop();
        }
        if(flag) return false;
        else if(!stack.empty()||!stack2.empty()) return false;
        return true;
    }
};