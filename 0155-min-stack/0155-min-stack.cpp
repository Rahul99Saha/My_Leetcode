class MinStack {
public:
    vector<int> min_vec;
    vector<int> b;
    MinStack() { 
    }

    void push(int val) {
        b.push_back(val);
        if(min_vec.empty()){
            min_vec.push_back(val);
        }
        else{
            min_vec.push_back(min(val,min_vec.back()));
        }
    }
    
    void pop() {
        b.pop_back();
        min_vec.pop_back();
    }
    
    int top() {
        return b.back();
    }
    
    int getMin() {
        return min_vec.back();
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