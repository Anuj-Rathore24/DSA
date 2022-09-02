class MyQueue {
public:
    stack<int> stack;
    MyQueue() {
    }
    
    void push(int x) {
        this->stack.push(x);
    }
    
    int pop() {
        std::stack<int> newStack;
        int result;
        while(!this->stack.empty()){
            newStack.push(this->stack.top());
            this->stack.pop();
        }
        result=newStack.top();
        newStack.pop();
        while(!newStack.empty()){
            this->stack.push(newStack.top());
            newStack.pop();
        }
        return result;
    }
    
    int peek() {
        std::stack<int> newStack;
        int result;
        while(!this->stack.empty()){
            newStack.push(this->stack.top());
            this->stack.pop();
        }
        result=newStack.top();
        while(!newStack.empty()){
            this->stack.push(newStack.top());
            newStack.pop();
        }
        return result;
    }
    
    bool empty() {
        return this->stack.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */