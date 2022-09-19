class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int> even,odd;
        for(int i=0;i<nums.size();i++){
            int elements=nums.at(i);
            if(elements>0) even.push(elements);
            else odd.push(elements);
        }
        int i=0;
        while(i<nums.size()){
            if(i%2==0) {
                nums.at(i)=even.front();
                even.pop();    
            }else{
                nums.at(i)=odd.front();
                odd.pop();
            }
            i++;
        }
        return nums;
    }
};