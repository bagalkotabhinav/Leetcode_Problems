class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int profit=0,min=INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min)
                min=prices[i];
            if(profit<prices[i]-min)
                profit=prices[i]-min;
        }
        return profit;
    }
};
