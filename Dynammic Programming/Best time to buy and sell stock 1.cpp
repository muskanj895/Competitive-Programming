class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ls=INT_MAX; //least selling price
        int op=0; // overall profit
        int ptd=0; //profit till date
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i] < ls)
            {
                ls=prices[i];
            }
            ptd=prices[i]-ls;
            if(op < ptd)
            {
                op = ptd;
            }
        }
        return op;
    }
};
