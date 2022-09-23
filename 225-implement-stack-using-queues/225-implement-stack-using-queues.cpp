class MyStack {
public:
    queue<int> stack;
    int topElement;
    
    MyStack() {
        
    }
    
    void push(int x) {
        stack.push(x);
        topElement=x;
    }
    
    int pop() {
        int length=stack.size(),i=0,temp;
        while(i<length-1){
            topElement=stack.front();
            stack.pop();
            stack.push(topElement);
            i++;
        }
        temp=stack.front();
        stack.pop();
        return temp;
    }
    
    int top() {
        return topElement;
    }
    
    bool empty() {
        return stack.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */