class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<map<int,int>,int>mp;
        int i = 0;

        for(auto str:strs){
            map<int,int>currmp;
            for(auto ch:str){
                currmp[ch-'a']++;
            }
            if(mp.find(currmp)!=mp.end()){
                int idx=mp[currmp];
                ans[idx].push_back(str);
            }else{
                vector<string>v;
                v.push_back(str);
                ans.push_back(v);
                mp[currmp]=i;
                i++;
            }
        }
        return ans;
    }
};
