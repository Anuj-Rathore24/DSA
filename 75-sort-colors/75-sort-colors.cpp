class Solution {
public:
    void sortColors(vector<int>& nums) {
        int flag=1;
        int lenght=nums.size();
        for(int i=0;i<lenght;i++){
            if(!flag) break;
            flag=0;
            for(int j=0;j<lenght-1;j++){
                if(nums.at(j)>nums.at(j+1)){
                    swap(nums.at(j),nums.at(j+1));
                    flag=1;
                }                    
            }
        }
    }
};