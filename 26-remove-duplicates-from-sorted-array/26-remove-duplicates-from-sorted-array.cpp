class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int currElement=nums.at(0),index=1;
        for(int i=1;i<nums.size();i++){
            if(currElement!=nums.at(i)){
                nums.at(index)=nums.at(i);
                currElement=nums.at(i);
                index++;
            }
        }
        return index;
    }
};