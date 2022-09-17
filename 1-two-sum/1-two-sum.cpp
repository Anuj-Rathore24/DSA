class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> table;
        unordered_map<int, int>::iterator itr;
        vector<int> result;
        int currElement;
        
        for(int i=0;i<nums.size();i++){
            currElement=nums.at(i);
            table.insert({target-currElement,i});
        }
        for(int i=0;i<nums.size();i++){
            currElement=nums.at(i);
            itr=table.find(currElement);
            if(itr!=table.end()&&itr->second!=i){
                result.push_back(itr->second);
                result.push_back(i);
                return result;
            }
        }
        
        return result;
    }
};