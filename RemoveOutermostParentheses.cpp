/*
1021. Remove Outermost Parentheses

A valid parentheses string is either empty "", "(" + A + ")", or A + B, where A and B are valid parentheses strings, and + represents string concatenation.

    For example, "", "()", "(())()", and "(()(()))" are all valid parentheses strings.

A valid parentheses string s is primitive if it is nonempty, and there does not exist a way to split it into s = A + B, with A and B nonempty valid parentheses strings.

Given a valid parentheses string s, consider its primitive decomposition: s = P1 + P2 + ... + Pk, where Pi are primitive valid parentheses strings.

Return s after removing the outermost parentheses of every primitive string in the primitive decomposition of s.

 

Example 1:

Input: s = "(()())(())"
Output: "()()()"
Explanation: 
The input string is "(()())(())", with primitive decomposition "(()())" + "(())".
After removing outer parentheses of each part, this is "()()" + "()" = "()()()".




*/


class Solution {
public:
    string removeOuterParentheses(string s) {

        // Our Task is to separate out all the outer parethenses from all the valid parentheses
        stack<char> table;
        string result;
        table.push(s.at(0));
        map<int,int> chart;
        int begin=0; 
        // first find all the valid parentheses and store them in map
        for(int i=1;i<s.length();i++){
            if(table.empty()){
                chart.insert({begin,i-1});
                table.push(s.at(i));
                begin=i;
            }else{
                if(s.at(i)==')') table.pop();
                else table.push(s.at(i));
            }

        }

        chart.insert({begin,s.length()-1});
        // secondly iterate the map and separate out the outer parentheses for all the valid parentheses! 
        for(auto itr:chart){
            for(int i=itr.first+1;i<itr.second;i++){
                result+=s[i];
            }
        }

        return result;
    }
};
