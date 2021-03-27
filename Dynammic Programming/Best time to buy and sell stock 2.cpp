class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bp=0; //buying price
        int sp=0; //selling price
        int profit=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i] > prices[i-1])
            {
                sp++;
            }
            else
            {
                profit += prices[sp]-prices[bp];
                sp=bp=i;
            }
                      
        }
          profit +=prices[sp]-prices[bp];
        return profit;
    }
};
