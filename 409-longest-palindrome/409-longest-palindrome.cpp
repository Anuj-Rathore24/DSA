class Solution {
public:
    int longestPalindrome(string s) {
        int result=0, flag=0;
        map<char, int> table;
        map<char, int>::iterator itr;
        for(auto c:s){
            if(table.count(c)){
                itr=table.find(c);
                itr->second++;
            }
            else{
                table.insert(pair<char,int>(c,1));
            }
        }
        
        for(auto ma:table){
            if(ma.second%2==0){
                result+=ma.second;
            }else{
                if(flag==0){
                    result+=ma.second;
                    flag=1;
                }else{
                    result+=ma.second-1;
                }
            }
        }
        return result;
    }
};