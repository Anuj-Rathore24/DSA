class Solution {
    public String addBinary(String a, String b) 
    {
        StringBuilder res = new StringBuilder();
        int carry = 0;
        int sum = 0;
        
        for(int i=a.length()-1, j=b.length()-1; i>=0 || j>=0; i--, j--)  
        {
            if(i>=0)
            { char ca = a.charAt(i); sum = sum + ca-'0';} 
            
            if(j>=0)
            { char cb = b.charAt(j);  sum = sum + cb-'0'; }

            sum = sum + carry; 
            if(sum%2==0)
                res.append(0);
            else
                res.append(1);
            
            if(sum>1)
                carry = 1;
            else
                carry = 0;
            sum=0;
            
        }
        if(carry==1)
            res.append('1');
        return res.reverse().toString();
    }
}