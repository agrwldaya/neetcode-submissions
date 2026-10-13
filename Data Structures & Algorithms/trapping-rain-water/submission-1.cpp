class Solution {
public:
    int trap(vector<int>& height) {
        int l=0, r = height.size()-1;
        int leftmax = height[l];
        int rightmax = height[r];
        int total = 0;

        while(l<r){
            leftmax = max(height[l],leftmax);
            rightmax = max(height[r],rightmax);
            
            if(leftmax>rightmax){
                total+=rightmax-height[r];
                r--;
            }else{
                total+=leftmax-height[l];
                l++;
            }

        }
        return total;
    }
};
