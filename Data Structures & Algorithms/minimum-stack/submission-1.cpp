class MinStack {
    private:
    long min;
    std::stack<long> stack;
public:
    MinStack() {

    }
    
    void push(int val) {
        if(stack.empty()){
            min = val;
            stack.push(0);
            return;
        }
        
        stack.push(val-min);
        if(val<min){
            min = val;
        }

    }
    
    void pop() {
       long top = stack.top();
        stack.pop();
        if(top<0){
            min = min - top;
            
            return;
        }
       
    }
    
    int top() {
        long top = stack.top();
        if(top>0){

            return top+min;
        }
        return min;
    }
    
    int getMin() {
        return (int)min;
    }
};
