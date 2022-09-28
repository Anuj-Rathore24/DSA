class Solution {
public:
    string largestOddNumber(string num) {
        int length=num.length(),index;
        if((num.at(length-1)-'0')%2) return num;
        string result="";
        for(int i=length-1;i>=0;i--){
            if(num.at(i)%2){
                index=i;
                break;
            } 
        }
        for(int i=0;i<index+1;i++){
            result+=num.at(i);
        }
        return result;
    }
};