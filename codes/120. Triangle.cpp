class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
    /* int n = triangle.size();
        if(n==1)
            return triangle[0][0];
        int maxi = INT_MAX;
        for(int i=1;i<n;i++){
   // length of each row is equal to the index of that row
            for(int j=0;j<=i;j++){
	// first element of row
                if(j==0)
                    triangle[i][0]+=triangle[i-1][0];
	// last element of row
                else if(j==i)
                    triangle[i][i]+=triangle[i-1][i-1];
                else
                    triangle[i][j] +=min(triangle[i-1][j-1], triangle[i-1][j]) ;
            }
           
        }
        
        for(int i=0;i<triangle[n-1].size();i++)
            maxi=min(triangle[n-1][i],maxi);
        return maxi;
       
    }
                                                                               
};
//second solution by botttom up
int n = trianlge.size();
        for(int i = triangle.size()-2;i >= 0;i--)
        {
            for(int j =0;j<=i;j++)
            {
                triangle[i][j] += min(triangle[i+1][j],triangle[i+1][j+1]);
            }
        }
return triangle[0][0];
