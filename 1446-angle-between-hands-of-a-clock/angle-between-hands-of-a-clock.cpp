class Solution {
public:

    
    double angleClock(int hour, int minutes) {
        double hr;
        if(hour==12){hour=0;}
        double minu=minutes/60.0*360;
        hr=((hour+(minutes/60.0))*5*360)/60;
        return min(abs(hr-minu),360-abs(hr-minu));
    }
};