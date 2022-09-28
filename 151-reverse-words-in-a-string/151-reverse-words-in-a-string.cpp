class Solution {
public:
    string reverseWords(string s) {
        stack<char> stack;
        int flag=0;
        string result="";
        for(int i=s.length()-1;i>=0;i--){
            if(s.at(i)!=' ') stack.push(s.at(i));
            else{
                flag=0;
                while(!stack.empty()){
                    result+=stack.top();
                    flag=1;
                    stack.pop();
                }
                if(flag==1) result+=" ";
            }
        }
        while(!stack.empty()){
            result+=stack.top();
            stack.pop();
        }
        if(result.at(result.length()-1)==' ') result.pop_back();
        return result;
    }
};