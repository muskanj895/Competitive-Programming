class Solution {
public:
    int nthUglyNumber(int n) {
        vector <int> dp(n);
        dp[0]=1;
        int twoIdx=0;
        int threeIdx=0;
        int fiveIdx=0;
        for(int i=1;i<n;i++)
        {
            int multiplytwo=dp[twoIdx]*2;
            int multiplythree=dp[threeIdx]*3;
            int multiplyfive=dp[fiveIdx]*5;
            int ans =min(multiplytwo,min(multiplythree,multiplyfive));
            dp[i]=ans;
            if(ans == multiplytwo)
                twoIdx++;
            if(ans ==multiplythree)
                threeIdx++;
            if(ans == multiplyfive)
                fiveIdx++;
        }
        return dp[n-1];
    }
};
