class Solution {
public:
    int calculate_sum(int num)
    {
        int c=0; 
        int d1,d2=0;
        int sum=0;
        for(int i = 1;i * i <= num;i++)
        {
            if(num%i == 0)
            {
                d1=i;
                d2=num/i;
                if(d1==d2)//perfect square 
                {
                    c++;
                    sum+=d1;
                }
                else
                {
                    c+=2;
                    sum=sum+d1+d2;
                }
            }
        }
        if(c==4) 
        return sum;
        else
        return 0;
    }
    int sumFourDivisors(vector<int>& nums) 
    {
        int csum=0;
        for(int i = 0;i <nums.size();i++)
        {
            csum += calculate_sum(nums[i]);
        }
        return csum;
    }
};