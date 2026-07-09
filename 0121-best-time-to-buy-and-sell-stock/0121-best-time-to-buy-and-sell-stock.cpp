class Solution {
public:
    int maxProfit(vector<int>& prices) {
        signed int profit=0;
        int buy = prices[0];
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]-buy<0)
            {
                buy=prices[i];
            }
            else
            {
                if(profit<prices[i]-buy)
                    profit = prices[i]-buy;
            }
            
        }
        return profit;
        
    }
};