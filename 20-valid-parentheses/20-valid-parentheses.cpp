class Solution {
public:
    bool isValid(string s) {
            bool flag = true;
        vector<char> stack;
    for (char c : s)
    {
        if (!flag)
            break;
        if (c == '(' || c == '[' || c == '{')
        {
            stack.push_back(c);
        }
        else if (!stack.empty())
        {
            if (c == ')')
            {
                if (stack.back() != '(')
                {
                    flag = false;
                    break;
                }
                else
                {
                    stack.pop_back();
                }
            }
            else if (c == ']')
            {
                if (stack.back() != '[')
                {
                    flag = false;
                    break;
                }
                else
                {
                    stack.pop_back();
                }
            }
            else if (c == '}')
            {
                if (stack.back() != '{')
                {
                    flag = false;
                    break;
                }
                else
                {
                    stack.pop_back();
                }
            }
        }
        else flag=false;
    }
    if(!stack.empty()) flag=false; 
    return flag;
    }
};