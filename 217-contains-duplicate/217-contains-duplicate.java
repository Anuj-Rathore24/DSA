class Solution {
    public boolean containsDuplicate(int[] nums) {
        boolean result=false;
        Map<String, Integer> table=new HashMap<String, Integer>();
        int number;
        for(int i=0;i<nums.length;i++){
            number=nums[i];
            if(!table.containsKey(String.valueOf(number))){
                table.put(String.valueOf(number),number);
            }else{
                result=true;
                break;
            }
        }
        return result;
    }
}