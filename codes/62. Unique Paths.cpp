class Solution {
public:
   int dp[100][100];
    int explore(int m,int n,int ubr,int ubc){
        if(m<0 || n<0 || m>=ubr || n>=ubc)
            return 0;
        if(m==0 && n==0) return 1;
        if(dp[m][n]!=-1) return dp[m][n];
        dp[m][n]=(explore(m-1,n,ubr,ubc))+(explore(m,n-1,ubr,ubc));
        return dp[m][n];
    }
    int uniquePaths(int m, int n) {
      
        memset(dp,-1,sizeof(dp));
        return explore(m-1,n-1,m,n);
        
    }
};
//second option 
int dp[100][100]={0};
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i == 0 || j==0)
                    dp[i][j] = 1;
                else
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
    return dp[m-1][n-1];*/
