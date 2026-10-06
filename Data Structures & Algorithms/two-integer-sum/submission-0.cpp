class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int>ans(2);
        for(int i=0;i<nums.size();i++){
            int rem =  target-nums[i];

            if(mp.find(rem)!=mp.end()){
                ans={mp[rem],i};
                break;
            }
            mp[nums[i]]=i;
        }
        return ans;
    }
};
