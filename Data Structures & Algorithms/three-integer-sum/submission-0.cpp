class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>st;

        for(int i=0;i<nums.size();i++){
            int target = 0-nums[i];
            unordered_map<int,int>mp;

            for(int j=i+1;j<nums.size();j++){
                int rem = target-nums[j];
                if(mp.find(rem)!=mp.end()){
                    vector<int>v;
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    v.push_back(rem);
                    sort(v.begin(),v.end());
                    st.insert(v);
                }
                mp[nums[j]]++;
            }
        }

        vector<vector<int>>ans;
        for(auto v:st){
            ans.push_back(v);
        }
        return ans;
    }
};
