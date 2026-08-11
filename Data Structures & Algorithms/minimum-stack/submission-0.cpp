class MinStack {
public:
    MinStack() {}
    
    std::stack<int> stack_;
    std::stack<int> copied;
    
    void push(int val) {
        stack_.push(val);
        if(copied.empty()){
            copied.push(val);
            return;
        } 

        int top = copied.top();

        if(val < top){
            copied.push(val);
        }else{
            copied.push(top);
        }
    }
    
    void pop() {
        stack_.pop();
        copied.pop();
        
    }
    
    int top() {
        return stack_.top();

    }
    
    int getMin() {
        return copied.top();
    }
};
