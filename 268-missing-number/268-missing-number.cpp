class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum1=0,sum2=0;
        for(int i=0;i<nums.size();i++){
            sum1+=nums.at(i);
            sum2+=i+1;
        }
        return sum2-sum1;
    }
};