class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int buy = INT_MAX;

        for(auto price:prices){
            buy = min(buy,price);
            maxProfit= max(maxProfit,price-buy);
        }
        return maxProfit;

    }
};
