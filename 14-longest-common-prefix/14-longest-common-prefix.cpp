class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result=strs.at(0),temp="",curr;
        for(int i=1;i<strs.size();i++){
            temp="";
            curr=strs.at(i);
            for(int j=0;j<min(result.length(),curr.length());j++){
                if(result.at(j)!=curr.at(j)){
                    result=temp;
                    break;
                }
                temp+=curr.at(j);
            }
            if(result=="") return "";
            else result=temp;
        }
        return result;
    }
};