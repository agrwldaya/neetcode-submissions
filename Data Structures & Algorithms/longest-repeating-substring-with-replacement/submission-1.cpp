class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int mostfreq = 0;
        int j = 0;
        int maxlen = 0;

        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            mostfreq = max(mostfreq,mp[s[i]]);

            while((i-j+1)-mostfreq >k){
                mp[s[j]]--;
                j++;
            }
            maxlen =  max(maxlen,i-j+1);
        }
        return maxlen;
         
    }
};
