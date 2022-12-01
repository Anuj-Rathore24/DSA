/*
  Given an array of integers arr, return true if the number of occurrences of each value in the array is unique, or false otherwise.

 

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
*/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> table,result;
        for(int i=0;i<arr.size();i++){
            auto itr=table.find(arr.at(i));
            if(itr==table.end()){
                table.insert({arr.at(i),1});
            }else{
                itr->second++;
            }
        }
        for(auto itr:table){
            if(result.find(itr.second)==result.end()){
                result.insert({itr.second,1});
            }
            else return false;
        }

        
        return true;
    }
};
