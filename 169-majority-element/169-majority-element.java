class Solution {
    public int majorityElement(int[] nums) {
        
        Map<Integer, Integer> table=new HashMap<Integer,Integer>();
        int number,result=0;
        for(int i=0;i<nums.length;i++){
            number=nums[i];
            if(table.containsKey(number)){
                table.put(number, table.get(number) + 1);
            }else{
                table.put(number,1);   
            }
            result = Collections.max(table.entrySet(), Map.Entry.comparingByValue()).getKey();
        }
        return result;
    }
}