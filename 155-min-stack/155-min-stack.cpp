class MinStack {
public:
    stack<int> st,stMin;
    int min=INT_MAX;
    MinStack() {
        stack<int> stack=st;
    }
    
    void push(int val) {
        if(min>=val){
            stMin.push(val);
            min=val;
        }
        this->st.push(val);
    }
    
    void pop() {
        int number=st.top();
        if(number==min){
            stMin.pop();
            if(!stMin.empty()) min=stMin.top();
            else min=INT_MAX;
        };
        this->st.pop();
    }
    
    int top() {
        return this->st.top();
    }
    
    int getMin() {
        return this->min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */