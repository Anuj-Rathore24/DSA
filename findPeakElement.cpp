// A peak element is an element that is strictly greater than its neighbors.

// Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

// You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

// You must write an algorithm that runs in O(log n) time.

 

// Example 1:

// Input: nums = [1,2,3,1]
// Output: 2
// Explanation: 3 is a peak element and your function should return the index number 2.

// Solution -:

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        return devide(0,nums.size()-1,nums);
    }
    int devide(int low,int high,vector<int>& nums){
        if(high-low==0) return low;
        if(high-low==1){
            if(nums.at(high)>nums.at(low)) return high;
            return low;
        }
        int mid=low+(high-low)/2;
        int left=devide(low,mid-1,nums);
        int right=devide(mid,high,nums);
        if(nums.at(left)>nums.at(right)) return left;
        return right;
    }
};
