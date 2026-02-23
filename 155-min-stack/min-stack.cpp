
class MinStack {
public:
    stack<long long> stk;
    long long temp=INT64_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        if (stk.empty())
        {
            stk.push(val);
            temp=val;
        }
        else{
            if (val>=temp)
            {
                stk.push(val);
            }
            else{
                stk.push((long long)2*val-temp);
                temp=val;
            }
            
        }
        
    }
    
    void pop() {
        if(stk.empty()){return;}
        if (stk.top()<temp)
        {
            temp=2*temp-stk.top();

        }
        stk.pop();
    }
    
    int top() {
        if (stk.top()<temp)
        {
            return temp;

        }
        return stk.top();
        
    }
    
    int getMin() {
        return temp;
    }
};