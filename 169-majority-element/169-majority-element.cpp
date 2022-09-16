class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int> table;
        int number;
        unordered_map<int,int>::iterator itr;
        int result=nums.at(0);
        int max=1;
        for(int i=0;i<nums.size();i++){
            number=nums.at(i);
            itr=table.find(number);
            if(itr==table.end()){
                table.insert({number,1});
            }else{
                itr->second++;
                if(itr->second>max){
                    result=itr->first;
                    max=itr->second;
                }
            }
        }
        return result;
    }
};