class Solution {
public:
vector<int>get_next_greatest(vector<int>& height){
    vector<int>v(height.size(),-1);
    stack<int>st;

    for(int i=height.size()-1;i>=0;i--){

        while(!st.empty() && st.top()<=height[i]){
            st.pop();
        }

        if(!st.empty()){
            v[i]=st.top();
        }else{
            st.push(height[i]);
        }
    }
  
    return v;
}
vector<int>get_prev_greatest(vector<int>& height){
    vector<int>v(height.size(),-1);
    stack<int>st;

    for(int i=0;i<height.size();i++){
        while(!st.empty() && st.top()<=height[i]){
            st.pop();
        }
        if(!st.empty()){
            v[i]=st.top();
        }else{
            st.push(height[i]);
        }
        
    }
    return v;
}
    int trap(vector<int>& height) {
        vector<int>next_greatest =  get_next_greatest(height);
        vector<int>prev_greatest =  get_prev_greatest(height);

        int total_water_traped = 0;

        for(int i=0;i<height.size();i++){
            int prev = prev_greatest[i];
            int next = next_greatest[i];
            
            if(prev!=-1 && next!=-1){
                total_water_traped+=min(prev,next)-height[i];
            }
        }
        return total_water_traped;
    }
};
