class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slowPointer=0,size=nums.size();
        for(int i=1;i<size;i++){
            if(nums.at(slowPointer)!=0) slowPointer++;
            if(nums.at(i)!=0&&nums.at(slowPointer)==0){
                nums.at(slowPointer)=nums.at(i);
                nums.at(i)=0;
                slowPointer++;
            }
        }
        
    }
};