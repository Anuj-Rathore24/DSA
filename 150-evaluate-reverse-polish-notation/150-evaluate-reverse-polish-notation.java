class Solution {
    public int evalRPN(String[] tokens) {
        Stack<Integer> stack=new Stack<Integer>();;
        int b,a;
        for(int i=0;i<tokens.length;i++){
            if(tokens[i].equals("+")||tokens[i].equals("-")||tokens[i].equals("*")||tokens[i].equals("/")){
                    b=stack.peek();
                    stack.pop();
                    if(tokens[i].equals("+")){
                        a=stack.peek()+b;
                        stack.pop();
                        stack.push(a);
                    }else if(tokens[i].equals("*")){
                        a=stack.peek()*b;
                        stack.pop();
                        stack.push(a);
                    }else if(tokens[i].equals("-")){
                        a=stack.peek()-b;
                        stack.pop();
                        stack.push(a);
                    }else{
                        a=stack.peek()/b;
                        stack.pop();
                        stack.push(a);
                    }
                
            }else{
                stack.push(Integer.parseInt(tokens[i]));
            }
        }
        int result=stack.peek();
        return result;
    }
}