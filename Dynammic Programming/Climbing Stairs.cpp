class Solution {
public:
    int climbStairs(int n) {e
        //Recursively
        if (n < 0)
            return 0;
        if (n == 0)
            return 1;

        return climbStairs(n - 1) + climbStairs(n - 2);
        //By using tabularization
        int dp[n+1];
        dp[0]=1;
       // dp[n] =0;
        for(int i=1;i<=n;i++)
        {
            if(i==1)
                dp[i]=dp[i-1];
            else 
                dp[i]=dp[i-1]+dp[i-2];
            
        }
        return dp[n];
    }
};
