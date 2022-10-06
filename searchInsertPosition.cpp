// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.

 

// Example 1:

// Input: nums = [1,3,5,6], target = 5
// Output: 2


// Solution -:

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int length=nums.size();
        if(length==1){
            if(target>nums.at(0)) return 1;
            if(target==nums.at(0)) return 0;
            return 0;
        }
        return binarySearch(0,length-1,target,nums);
    }
    int binarySearch(int low, int high,int target,vector<int>& nums){
        if(high-low==1){
            if(nums.at(low)==target) return low;
            else if(nums.at(high)==target) return high;
            else{
                if(target>nums.at(high)) return high+1;
                if(target<nums.at(low)) return low;
                return high;
            } 
        }else{
            int mid=low+(high-low)/2;
            if(nums.at(mid)>target){
                return binarySearch(low,mid,target,nums);
            }else{
                return binarySearch(mid,high,target,nums);
            }
        }
    }
};
