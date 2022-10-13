// You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

// Return the single element that appears only once.

// Your solution must run in O(log n) time and O(1) space.

 

// Example 1:

// Input: nums = [1,1,2,3,3,4,4,8,8]
// Output: 2

// Solution-:

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        return divideConquer(0,nums.size()-1,nums);
    }
    int divideConquer(int low, int high, vector<int>& nums){
        if(low==high) return nums.at(low);
        else if(high-low==1) return nums.at(low)^nums.at(high);
        int mid=low+(high-low)/2;
        int left = divideConquer(low,mid-1,nums);
        int right = divideConquer(mid,high,nums);
        return left^right;
    }
};
