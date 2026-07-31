class Solution {
public:
    int minimumPushes(string word) {
        vector<int>freq(26,0) ;
        for(int i= 0;i<word.size();i++){
            char ch = word[i];
            freq[ch-'a']++;  
        }
        sort(freq.begin(),freq.end(),greater<int>());
        int k = 0;
        int count = 0;
        for(int i =0;i<26;i++){
            k = i/8;
            if(k==0)
                count+=freq[i];
            else if(k==1)
                count+=2*freq[i];
            else if(k==2)
                count+=3*freq[i];
            else
                count+=4*freq[i];
        }
        return count;
    }
};