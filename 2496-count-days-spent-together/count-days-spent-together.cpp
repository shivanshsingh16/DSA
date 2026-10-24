class Solution {
public:
int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
    
        vector<int> days={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        vector<int> days_sum(days.size(),0);
        int sum=0;
        for (int i = 0; i < days.size(); i++)
        {
            days_sum[i]=sum;
            sum+=days[i];
        }
        int arriveAlice_month= stoi(arriveAlice.substr(0,2));
        int arriveAlice_day=stoi(arriveAlice.substr(3,2));
        int leaveAlice_month=stoi(leaveAlice.substr(0,2));
        int leaveAlice_day=stoi(leaveAlice.substr(3,2));
        int arriveBob_month=stoi(arriveBob.substr(0,2));
        int arriveBob_day=stoi(arriveBob.substr(3,2));
        int leaveBob_month=stoi(leaveBob.substr(0,2));
        int leaveBob_day=stoi(leaveBob.substr(3,2));


        int alice_leave_day= days_sum[leaveAlice_month-1]+leaveAlice_day;
        int alice_arrive_day=days_sum[arriveAlice_month-1]+arriveAlice_day;
        int bob_leave_day= days_sum[leaveBob_month-1]+ leaveBob_day;
        int bob_arrive_day= days_sum[arriveBob_month-1]+arriveBob_day;
        

        int leave_date;
        if (alice_leave_day>=bob_leave_day)
        {
            leave_date=bob_leave_day;
        }
        else{
            leave_date=alice_leave_day;
        }
        int arrive_date;
        if (alice_arrive_day>=bob_arrive_day)
        {
            arrive_date=alice_arrive_day;
        }
        else{
            arrive_date=bob_arrive_day;
        }
        if(leave_date-arrive_date+1<0){return 0;}
        return leave_date-arrive_date+1;
        
    }

};