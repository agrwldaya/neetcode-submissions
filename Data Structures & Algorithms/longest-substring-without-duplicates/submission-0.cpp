class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i =0,j=0;
        unordered_map<char,int>mp;
        int maxlen=0;

        for(int i=0;i<s.size();i++){

            if(mp.find(s[i])!=mp.end() && mp[s[i]]>=j){
                j = mp[s[i]]+1;
            }
            mp[s[i]]=i;
            maxlen = max(maxlen,i-j+1);
        }
        return maxlen;
    }
};
