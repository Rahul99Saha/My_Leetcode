class Solution {
    public int mySqrt(int x) {
        if(x==0||x==1)
            return x;
        long low=1,high=x;
        while(low<=high)
        {
             long mid=(low+high)/2;
             long midN=mid*mid;
            if(midN<=(long)x)
                low=mid+1;
            else
                high=mid-1;
        }
        return (int)high;
    }
};