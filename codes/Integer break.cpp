class Solution {
public:
    int integerBreak(int n) {
        if(n==2)
            return 1;
        if(n==3)
            return 2;
        if(n==4)
            return 4;
        int result=1;
        if(n%3 == 0)
        {
            int m =n/3;
        result=pow(3,m);}
       else if(n%3 == 2){
           int m =n/3;
           result=pow(3,m)*2;}
        else if(n%3==1)
        {
            int m=(n-4)/3;
        result=pow(3,m)*4;}
        return result;
    }
};
//second
class Solution {
public:
    int integerBreak(int n) {
        int dp[60];
dp[1]=1;
        
       for(int i=2;i<=n;i++)
       {
           dp[i]=INT_MIN;
           for(int k=1;k<i;k++)
           {
               dp[i]=max(dp[i],k*max(dp[i-k],(i-k)));
           }
       }
                         return dp[n];
    }
};
