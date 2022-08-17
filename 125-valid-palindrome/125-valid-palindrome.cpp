class Solution {
public:
    bool isPalindrome(string s) {
            s.erase(std::remove_if(s.begin(), s.end(), std::not1(std::ptr_fun( (int(*)(int))std::isalnum ))), s.end());
            int lenght=s.size();
            bool result=true;
            for(int i=0;i<(lenght)/2;i++){
                if(tolower(s.at(i))!=tolower(s.at(lenght-i-1))){
                result=false;
                break;
                }
        }
    return result;
    }
};