class Solution {
public:
    string longestPalindrome(string s) 
    {//Using 2 pointer
        int n = s.size();
        string res;
        int len = 0;
        int left, right;
        for (int i = 0; i < n; i++)
        {
            left = i;
            right = i;
            // odd strings
            while (left >= 0 && right < n && s[left] == s[right])
            {
                if ((right - left + 1) > len)
                {
                    res = s.substr(left, right - left + 1);
                    len = right - left + 1;
                }
                left -= 1;
                right += 1;
            }
            left = i;
            right = i + 1;
            // even strings
            while (left >= 0 && right < n && s[left] == s[right])
            {
                if ((right - left + 1) > len)
                {
                    res = s.substr(left, right - left + 1);
                    len = right - left + 1;
                }
                left -= 1;
                right += 1;
            }
        }
        return res;
    }
};
