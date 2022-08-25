// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int result,lower=0,upper=n,half=1;
        while(half){
            half=(upper-lower)/2;
            if(isBadVersion(lower+half)){
                upper=half+lower;
            }else{
                lower+=half;
            }
        }
        if(isBadVersion(upper)){
            result=upper;
        }else{
            result=lower;
        }
        return result;
    }

};