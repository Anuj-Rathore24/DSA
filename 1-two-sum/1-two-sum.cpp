class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;
    int ind = 0, indTwo = 0, flag = 0;

    for (int x : nums)
    {
        if (flag)
            break;
        for (int y : nums)
        {
            if (x + y == target && ind!=indTwo)
            {
                result.push_back(ind);
                result.push_back(indTwo);
                flag = 1;
                break;
            }
            indTwo++;
        }
        ind++;
        indTwo = 0;
    }
        return result;
    }
};