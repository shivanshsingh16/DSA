class Robot {
public:
    int idx=0;
    bool move=false;
    vector<vector<int>> options;
    Robot(int width, int height) {
        for (int x = 0; x < width; x++)
        {
            options.push_back({x,0,0});
        }
        for (int y = 1; y<height; y++)
        {
            options.push_back({width-1,y,1});
        }
        for (int x = width-2;x>=0 ; x--)
        {
            options.push_back({x,height-1,2});
        }
        for (int y = height-2; y>0; y--)
        {
            options.push_back({0,y,3});
        }
        options[0][2]=3;
    }
    
    void step(int num) {
        move =true;
        idx=(idx+num)%options.size();
    }
    
    vector<int> getPos() {
        return {options[idx][0],options[idx][1]};
    }
    
    string getDir() {
        if (!move)
        {
            return "East";
        }
        if (options[idx][2]==0)
        {
            return "East";
        }
        else if (options[idx][2]==1)
        {
            return "North";
        }
        else if (options[idx][2]==2)
        {
            return "West";
        }
        else{
            return "South";
        }
    }
};