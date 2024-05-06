class Solution 
{
    int p=0;
    public String reversePrefix(String word, char ch) 
    {
        String result="";
        for(int i=0;i<word.length();i++)
        {
            char ch1=word.charAt(i);
            if(ch == ch1)
            {
                p=i;
                break;
            }
        }
        for(int i=0;i<word.length();i++)
        {
            char ch1=word.charAt(i);
            if(i<=p)
            result=ch1+result;
            else
            result=result+ch1;
        }
        return result;
    }
}