class Solution {
public:
    bool judgeCircle(string moves) 
    {
        int i=0;
        int j=0;
        for(char m : moves)
        {
            if(m=='U')
            {
                j++;
            }
            else if(m=='D')
            {
                j--;
            }
            else if(m=='R')
            {
                i++;
            }
            else if(m=='L')
            {
                i--;
            }
        }  
        if(i==0 && j==0)
        return true;
        else
        return false;
    }
};