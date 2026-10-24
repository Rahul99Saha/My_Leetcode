class Solution {
public:
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int toDay(string date){
        int total = 0;
        int m = stoi(date.substr(0,2));
        int d = stoi(date.substr(3));
        for(int i = 0;i<m-1;i++){
            total += month[i];
        }
        return total+d;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        //calcualte total days
        int start = max(toDay(arriveAlice),toDay(arriveBob));
        int end = min(toDay(leaveAlice),toDay(leaveBob));
        return max(0,end-start+1);
    }
};