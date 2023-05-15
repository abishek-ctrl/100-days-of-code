class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=prices[0];
        int maxprofit=0;
        for(int i=1;i<prices.size();i++){
            int profit= prices[i]-minprice;
            minprice=min(minprice,prices[i]);
            maxprofit=max(profit,maxprofit);
        }
        return maxprofit;
    }
};
