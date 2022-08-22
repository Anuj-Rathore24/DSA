class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        bool result=true;
        map<char, int> table;
        map<char,int>::iterator itr;
        for(auto s:magazine){
            if(table.count(s)){
                itr=table.find(s);
                itr->second++;
            }
            else{
                table.insert(pair<char, int>(s,1));
            }
        }
        for(auto c:ransomNote){
            if(table.count(c)){
                itr=table.find(c);
                if(itr->second!=0){
                    itr->second--;
                }else{
                    result=false;
                    break;
                }
                
            }else{
                result=false;
                break;
            }
        }
        return result;
        
    }
};