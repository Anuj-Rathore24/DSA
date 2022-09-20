class Solution {
public:
    string frequencySort(string s) {
        string result="";
        unordered_map<char,int> table;
        multimap<int, char,greater<int>> table2;
        // auto itr=table.begin();
        
        
        for(char i:s){
            auto ctr=table.find(i);
            if(ctr==table.end()){
                table.insert({i,1});
            }else{
                ctr->second++;
            }
        }
        
        
        for(auto itr:table){
            table2.insert({itr.second,itr.first});
        }
        
        
        for(auto atr:table2){
            int i=0;
            while(i<atr.first){
                result+=atr.second;
                i++;                
            }
        }
        return result;
    }
};