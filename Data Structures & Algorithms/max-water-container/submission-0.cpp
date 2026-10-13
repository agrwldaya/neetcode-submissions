class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0,r = heights.size()-1;
        int ans = 0;

        while(l<r){
            int h = min(heights[l],heights[r]);
            int w =  r-l;
            int curr =  h*w;
            ans = max(ans,curr);

            if(heights[l]<heights[r])l++;
            else r--;
        }
        return ans;

    }
};
