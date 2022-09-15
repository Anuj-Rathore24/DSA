
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> row;
        unordered_map<int,int> sizeTable,index;
        sizeTable.insert({1,1});
        sizeTable.insert({2,2});
        sizeTable.insert({3,6});
        sizeTable.insert({4,24});
        sizeTable.insert({5,120});
        sizeTable.insert({6,720});
        
        
        map<vector<int>,int> table;
        
        int length=nums.size(),indexSelec;
        
        
        for(int i=0;i<sizeTable.at(length);i++){
            for(int j=0;j<length;j++){
                indexSelec=rand()%length;
                if(index.find(indexSelec)==index.end()){
                    index.insert({indexSelec,0});
                    row.push_back(nums.at(indexSelec));
                }else{
                    j--;
                }
            }
            index.clear();
            if(table.find(row)==table.end()){
                table.insert({row,1});
            }
            else{
                i--;
            }
            row.clear();
        }
        for(auto itr:table){
            result.push_back(itr.first);
        }
        
        return result;
    }
};