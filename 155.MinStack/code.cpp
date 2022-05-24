class MinStack {
public:
    MinStack() {
        
    }
    vector<pair<int,int>>v;
    
    int x= INT_MAX;
    void push(int val) {
        
        x=min(x,val);
        v.push_back({val,x});
    }
    
    void pop() {
        v.pop_back();
        if(v.size()!=0)
            x=v[v.size()-1].second;
        else
            x=INT_MAX;
    }
    
    int top() {
        return v[v.size()-1].first;
    }
    
    int getMin() {
        return v[v.size()-1].second;
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
