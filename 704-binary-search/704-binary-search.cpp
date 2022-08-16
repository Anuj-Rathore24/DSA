class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lenght=nums.size(),index=-1;
        if(nums.at(lenght/2)>target && lenght/2!=0){
            vector<int> v;
            v.assign(nums.begin(),nums.end()-lenght/2);
            index=search(v,target);
            // if(index!=-1) index+=lenght/2;
        }else if(nums.at(lenght/2)<target && lenght/2!=0){
            vector<int> v;
            v.assign(nums.begin()+lenght/2,nums.end());
            index=search(v,target);
            if(index!=-1) index+=lenght/2;
        }else if(nums.at(lenght/2)==target){
            index=lenght/2;
        }
        return index;
    }
};