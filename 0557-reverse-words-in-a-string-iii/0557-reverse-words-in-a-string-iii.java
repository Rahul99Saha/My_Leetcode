class Solution {
    public String reverseWords(String s) 
    {
        s=s+" ";//Important point
        String rev="";int len=s.length();
        String w = "";
        for(int i=0;i<len;i++)
        {
            char ch=s.charAt(i);
            if(ch!=' ')
            {
                w=ch+w;
            }
            else
            {
                rev=rev+w;
                if(i!=s.length()-1)
                 rev=rev+" ";
                w="";
            }
        } 
        return rev;   
    }
}