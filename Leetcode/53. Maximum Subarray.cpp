class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       vector<int> dp(nums.size()+1,0);
        dp[0]=nums[0] < 0 && nums.size() >1? 0 : nums[0];
        int max_num=*max_element(nums.begin(),nums.end());
        if(max_num < 0)
            return max_num;
        int max_so_far=dp[0];
        for(int i=1;i<nums.size();i++)
        {
            dp[i] =dp[i-1]+nums[i];
            if(dp[i] < 0)
                dp[i]=0;
            max_so_far=max(dp[i],max_so_far);
        }
        return max_so_far;
    }
};
