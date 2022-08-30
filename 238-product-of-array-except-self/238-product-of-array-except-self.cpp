class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        int length=nums.size(), multiple=1, numberOfZero=0, flag=0, secondMultiple=1;
        if(nums.at(0)==0) numberOfZero++;
        for(int i=1;i<length;i++){
            multiple*=nums.at(i);
            if(nums.at(i)==0) numberOfZero++;
        }
        if(numberOfZero>1) flag=1;
        result.push_back(multiple);
        for(int i=1;i<length;i++){
            if(flag){
                result.push_back(0);
            }else{
                if(numberOfZero==0){
                    multiple/=nums.at(i);
                    multiple*=nums.at(i-1);
                    result.push_back(multiple);        
                }else{
                    
                   if(nums.at(i)!=0) result.push_back(0);
                    else{
                        for(int j=0;j<length;j++){
                            if(nums.at(j)!=0)secondMultiple*=nums.at(j);                            
                        }
                        result.push_back(secondMultiple);
                    }
                }
            
            }
        }
        return result;
    }
};