class MinStack {
private:
    stack<long long> st;
    long long minval;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            st.push(val);
            minval=val;
        }
        else if(val>= minval){
            st.push(val);
        }
        else{
            //encoding data
            st.push(2LL*val-minval);
            minval=val;
        }
    }
    
    void pop() {
        if(st.empty()){
            return;
        }
        if(st.top()<minval){
            //restore prev min
            minval=2LL*minval-st.top();
        }
        st.pop();
    }

    
    int top() {
        if(st.empty()){
            return -1;
        }
        if(st.top()<minval){
            return minval;
        }    
        return st.top();
    }
    
    int getMin() {
        if(st.empty()){
            return -1;
        }
        return minval;
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