class Solution {
public:
    int romanToInt(string s) {
        int result=0;
        map<char, int> table;
        table.insert(pair<char ,int>('M',1000));
        table.insert(pair<char ,int>('D',500));
        table.insert(pair<char ,int>('C',100));
        table.insert(pair<char ,int>('L',50));
        table.insert(pair<char ,int>('X',10));
        table.insert(pair<char ,int>('V',5));
        table.insert(pair<char ,int>('I',1));
        int sum=1;
        stack<char> stack;
        stack.push(s.at(0));
        for(int i=1;i<s.length();i++){
            if(stack.top()==s.at(i)){
                stack.push(s.at(i));
                sum++;
            }else{
                if(table.at(stack.top())>table.at(s.at(i))){
                    result+=table.at(stack.top())*sum;
                    sum=1;
                    while(!stack.empty()) stack.pop();
                    stack.push(s.at(i));
                }
                else{
                    result-=table.at(stack.top())*sum;
                    sum=1;
                    while(!stack.empty()) stack.pop();
                    stack.push(s.at(i));
                }
            }
        }
        result+=table.at(stack.top())*sum;
        return result;
    }
};