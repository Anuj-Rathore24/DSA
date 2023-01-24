/*
n a town, there are n people labeled from 1 to n. There is a rumor that one of these people is secretly the town judge.

If the town judge exists, then:

    The town judge trusts nobody.
    Everybody (except for the town judge) trusts the town judge.
    There is exactly one person that satisfies properties 1 and 2.

You are given an array trust where trust[i] = [ai, bi] representing that the person labeled ai trusts the person labeled bi.

Return the label of the town judge if the town judge exists and can be identified, or return -1 otherwise.

 

Example 1:

Input: n = 2, trust = [[1,2]]
Output: 2

Example 2:

Input: n = 3, trust = [[1,3],[2,3]]
Output: 3


*/


class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int population=trust.size();
        if(population==0&&n==1) return 1;
        if(population==0&&n>1) return -1;
        int judge=trust[0][1];
        unordered_map<int,int> table;
        unordered_map<int,int>:: iterator itr;
        for(int i=0;i<population;i++){
            itr=table.find(trust[i][1]);
            if(itr==table.end()){
                table[trust[i][1]]=1;
            }else{
                itr->second++;
            }
        }
        int flag=0;
        for(auto itr:table){
            if(itr.second==n-1){
                if(flag) return -1;
                judge=itr.first;
                flag=1;
            }
        }
        if(!flag) return -1;
        for(int i=0;i<population;i++){
            if(trust[i][0]==judge) return -1;
        }
        return judge;
    }
};
