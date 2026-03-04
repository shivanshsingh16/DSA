class StockSpanner {
public:
    stack<pair<int,int>> stk;
    int i =0;
    StockSpanner() {
    }
    
    int next(int price) {
        int result=0;
        while (!stk.empty()&&stk.top().first<=price)
        {
            stk.pop();
        }
        if (stk.empty())
        {result=i+1;
        }
        else{
            result=i-stk.top().second;
        }
        stk.push({price,i});
        i++;
        return result;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */