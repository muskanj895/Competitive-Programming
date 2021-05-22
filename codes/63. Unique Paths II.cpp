class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
       int row = obstacleGrid.size();
        if(row==0){
            return 0;
        }
        int column = obstacleGrid[0].size();
        
        int path = obstacleGrid[0][0] == 1 ? 0 : 1;
        for(int i = 1 ; i<row ; i++){
            if(obstacleGrid[i][0] == 1){
                path = 0;
            }
            obstacleGrid[i][0] = path;
        }
        
        path = 1;
        for(int i = 0 ; i<column ; i++){
            if(obstacleGrid[0][i] == 1){
                path = 0;
            }
            obstacleGrid[0][i] = path;
        }
        
        for(int i = 1 ; i<row ; i++){
            for(int j = 1 ; j<column ; j++){
                if(obstacleGrid[i][j] == 1){
                    obstacleGrid[i][j] = 0;
                }else{
                    obstacleGrid[i][j] = obstacleGrid[i][j-1] + obstacleGrid[i-1][j];
                }
            }
        }
        return obstacleGrid[row-1][column-1];

    }
};
