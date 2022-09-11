class Solution {
public:
    int calBinary(int n){
        int result=0;
        while(n>0){
            if(n%2==1) result++;
            n/=2;
        }
        return result;
    }
    vector<int> countBits(int n) {
        vector<int> result;
        for(int i=0;i<=n;i++){
            result.push_back(calBinary(i));
        }
        return result;
    }
};