class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int rows=grid.size();
        int col=grid[0].size();
      //creating same matrix as of grid to update values 
        vector<vector<int>> dp=grid;
        //filling the values in the matrix
        for(int i=rows-1;i>=0;i--)
        {
            for(int j=col-1;j>=0;j--)
            {
              //last cell
                if(i == rows-1 && j == col-1)
                    dp[i][j]=grid[i][j];
              //last row --howz sum will equal to its previous one and cost
                else if(i == rows-1)
                {
                    dp[i][j]=grid[i][j] + dp[i][j+1];
                }
              //last column
                else if(j == col-1)
                {
                    dp[i][j]=grid[i][j]+dp[i+1][j];
                }
              //other cases
                else
                {
                    dp[i][j]=grid[i][j]+min(dp[i][j+1],dp[i+1][j]);
                }
                    
            }
                            
        }
        return dp[0][0];
    }
};
