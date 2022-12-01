/*
You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half.

Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains uppercase and lowercase letters.

Return true if a and b are alike. Otherwise, return false.

 

Example 1:

Input: s = "book"
Output: true
Explanation: a = "bo" and b = "ok". a has 1 vowel and b has 1 vowel. Therefore, they are alike.

*/


class Solution {
public:
    bool halvesAreAlike(string s) {
        int length=s.size();
        int first=0,last=0;
        char front;
        bool fbool;

        for(int i=0;i<length/2;i++){
            front=s.at(i);
            fbool = (front == 'a' || front == 'e' || front == 'i' || front == 'o' || front == 'u' ||front == 'A' || front == 'E' || front == 'I' || front == 'O' || front == 'U');
            if(fbool) first++; 
        }
        for(int i=length/2;i<length;i++){
            front=s.at(i);
            fbool = (front == 'a' || front == 'e' || front == 'i' || front == 'o' || front == 'u' ||front == 'A' || front == 'E' || front == 'I' || front == 'O' || front == 'U');
            if(fbool) last++; 
        }
        if(first==last) return true;
        return false;
    }
};
