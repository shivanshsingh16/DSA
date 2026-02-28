class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stk;
        vector<int> answer;
        int bruh=0;
        for (int i = 0; i < asteroids.size(); i++)
        {
            bruh=0;
        if (asteroids[i]>0)
        {
            stk.push(asteroids[i]);
        }
        else{
        while (!stk.empty()&&stk.top()<=abs(asteroids[i]))
        {
            if (stk.top()==abs(asteroids[i]))
            {stk.pop();
            bruh=1;
            break;
            }
            stk.pop();
        }
        if(bruh==1){
            continue;
        }
        if (stk.empty()&&asteroids[i]<0)
        {
            answer.push_back(asteroids[i]);
        }
    }
}
        
    vector<int> temp;

    while (!stk.empty())
    {
        temp.push_back(stk.top());stk.pop();
    }
    
    reverse(temp.begin(),temp.end());
    answer.insert(answer.end(), temp.begin(), temp.end());
    return answer;  
    }
};