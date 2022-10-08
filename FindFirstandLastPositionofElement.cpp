// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

 

// Example 1:

// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]


// solution-:
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result{-1,-1},temp;
        if(nums.size()==0) return result;
        function(0,nums.size()-1,target,nums,temp);
        if(!temp.empty()){
            result.at(0)=temp.front();
            result.at(1)=temp.back();
        }
        return result;
    }
    void function(int low,int high,int target,vector<int>& nums,vector<int>& temp){
        if(low==high&&nums.at(low)==target){
            temp.push_back(low);
        }
        else if(high-low==1){
            if(nums.at(low)==target){
                temp.push_back(low);
            }
            if(nums.at(high)==target){
                temp.push_back(high);
            }      
        }
        else if(high>low){
            int mid=low+(high-low)/2;
            function(low,mid-1,target,nums,temp);
            function(mid,high,target,nums,temp);
        }
    }
};
