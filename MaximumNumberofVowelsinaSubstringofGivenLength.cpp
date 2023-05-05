/*


Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.

Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.

 

Example 1:

Input: s = "abciiidef", k = 3
Output: 3
Explanation: The substring "iii" contains 3 vowel letters.

Example 2:

Input: s = "aeiou", k = 2
Output: 2
Explanation: Any substring of length 2 contains 2 vowels.

Example 3:

Input: s = "leetcode", k = 3
Output: 2
Explanation: "lee", "eet" and "ode" contain 2 vowels.



*/

class Solution {
public:
    int maxVowels(string s, int k) {
        int result=0,tempResult=0,lastIndex=0;
        for(int i=0;i<k;i++){
            if(isVowel(s.at(i))) tempResult++;
        }
        result=max(tempResult,result);
        for(int i=k;i<s.size();i++){
            if(isVowel(s.at(i))) tempResult++;
            if(isVowel(s.at(lastIndex))) tempResult--;
            result=max(tempResult,result);
            lastIndex++;
        }

        return result;
    }
    bool isVowel(char c){
        bool isLowercaseVowel;
        return isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
};
