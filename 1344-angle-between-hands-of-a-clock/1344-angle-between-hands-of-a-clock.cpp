class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hourdegree  = (hour%12)*30 + minutes/2.0;
        double mitdegree = minutes*6;
        double ans = min(abs(hourdegree-mitdegree), abs(mitdegree-hourdegree));
        return ans<180.0 ? ans : 360-ans;
    }
};