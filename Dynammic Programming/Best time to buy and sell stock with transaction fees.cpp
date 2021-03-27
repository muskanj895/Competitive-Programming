class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
      //This is old buying price which will be equal to the firat price of the loan
        int obsp=-prices[0];
      //This is old selling price which will be 0 in starting.
        int ossp=0;
        for(int i=0;i<prices.size();i++)
        {
            int nbsp=0;
            int nssp=0;
            if(ossp-prices[i] > obsp)
            {
                nbsp=ossp-prices[i];
            }
            else
            {
                nbsp=obsp;
            }
            if(obsp+prices[i]-fee > ossp)
            {
                nssp=obsp+prices[i]-fee;
            }
            else
            {
                nssp=ossp;
            }
            ossp=nssp;
            obsp=nbsp;
        }
        return ossp;
    }
};
