class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int result=0,temp=0;
        for(int i:nums){
            if(i==1) temp++;
            else temp=0;
            if(result<temp) result=temp;
        }
        
        return result;
    }
};