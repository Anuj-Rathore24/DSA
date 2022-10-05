// The beauty of a string is the difference in frequencies between the most frequent and least frequent characters.

//     For example, the beauty of "abaacc" is 3 - 1 = 2.

// Given a string s, return the sum of beauty of all of its substrings.

 

// Example 1:

// Input: s = "aabcb"
// Output: 5
// Explanation: The substrings with non-zero beauty are ["aab","aabc","aabcb","abcb","bcb"], each with beauty equal to 1.

// Example 2:

// Input: s = "aabcbaa"
// Output: 17

 

// Constraints:

//     1 <= s.length <= 500
//     s consists of only lowercase English letters.



// solution(JAVA)-:

class Solution {
    private int getMinCount(int[] charCount) {
        int min = Integer.MAX_VALUE;
		
        for (int i = 0; i < charCount.length; ++i) {
            if (charCount[i] != 0) {
                min = Math.min(min, charCount[i]);
            }
        }
		
        return min;
    }
    
    private int getMaxCount(int[] charCount) {
        int max = 0;
		
        for (int i = 0; i < charCount.length; ++i) {
            max = Math.max(max, charCount[i]);
        }
		
        return max;
    }
    
    public int beautySum(String s) {
        int sum = 0;
        
        for (int i = 0; i < s.length(); ++i) {
            int[] charCount = new int[26]; // initialize charCount to all 0
            
            for (int j = i; j < s.length(); ++j) {
                ++charCount[s.charAt(j) - 'a'];

				// get beauty of substring from i to j
				int beauty = getMaxCount(charCount) - getMinCount(charCount);
                sum += beauty;
            }
        }
        
        return sum;
    }
}
