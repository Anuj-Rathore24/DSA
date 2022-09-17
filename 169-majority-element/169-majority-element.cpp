class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1,currElement=nums.at(0);
        for(int i=1;i<nums.size();i++){
            if(currElement!=nums.at(i)){
                count--;
                if(count==0){
                    currElement=nums.at(i);
                    count++;
                }
            }else{
                count++;
            }
        }
        return currElement;
    }
};