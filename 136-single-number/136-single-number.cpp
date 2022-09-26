class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> table;
        int result;
        for(int i:nums){
            auto itr=table.find(i);
            if(itr==table.end()){
                table.insert({i,1});
            }else{
                itr->second++;
            }
        }
        for(auto itr:table){
            if(itr.second==1) return itr.first;
        }
        return result;
    }
};