class Solution {
public:
    bool isIsomorphic(string s, string t) {
        bool result=true;
        unordered_map<char,char> table,table2;
        for(int i=0;i<s.size();i++){
            if(table.find(s.at(i))==table.end()){
                if(table2.find(t.at(i))==table2.end()){
                    table.insert({s.at(i),t.at(i)});
                    table2.insert({t.at(i),s.at(i)});
                }else{
                    return false;
                }
            }else{
                auto itr=table.find(s.at(i));
                if(itr->second!=t.at(i)) return false;
            }
        }
        return result;
    }
};