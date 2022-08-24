class Solution {
public:
int lengthOfLongestSubstring(string s)
{
    string substring = "", temp = "";
    int result = 0, flag = 0;
    int lenght = s.size(), tempLenght = 0;
    for (int i = 0; i < lenght; i++)
    {
        temp = substring;
        sort(temp.begin(), temp.end());
        tempLenght=temp.size();
        flag = 0;
        for (int j = 0; j < tempLenght; j++)
        {
            if (j + 1 < tempLenght)
            {
                if (temp.at(j) == temp.at(j + 1))
                {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 0)
        {
            if (substring.find(s.at(i)) == string::npos)
            {
                substring.push_back(s.at(i));
                if (substring.size() > result)
                {
                    result++;
                }
            }
            else
            {
                substring.push_back(s.at(i));
                substring.erase(0, 1);
            }
        }
        else
        {
            substring.push_back(s.at(i));
            substring.erase(0, 1);
        }
    }

    return result;
}
};