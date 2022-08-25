class Solution {
public:
int minSubArrayLen(int target, vector<int> &nums)
{
    int size=nums.size() ,sum=nums.at(0), lenght=1,flag=0,i=0;
    int result = INT_MAX;
    while(i<size)
    {
        if(flag) break;
        if(target>sum){
            if(i+lenght>=size) {
                flag=1;
                break;
            }
            sum+=nums.at(i+lenght);
            lenght++;
        }else if(target<=sum){
            if(result>lenght){
                result=lenght;
            }
            sum-=nums.at(i);
            lenght--;
            i++;
        }
    }
    if(result==INT_MAX) result=0;
    return result;
}

};