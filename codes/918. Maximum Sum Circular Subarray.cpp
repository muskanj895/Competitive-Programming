class Solution {
    
public:
    int kadanes(vector<int> &nums)
    {
        int max_so_far=INT_MIN;
        int curr=0;
       
        for(int i=0;i<nums.size();i++)
        {
            curr += nums[i];
            if(curr < 0)
                curr=0;
            max_so_far=max(curr,max_so_far);
        }
        return max_so_far;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
         int large=*max_element(nums.begin(),nums.end());
        {
            if(large < 0)
                return large;
        }
        int nonwrap=kadanes(nums);
        //int noncon=0;
        int total=0;
        for(int i=0;i<nums.size();i++)
        {
            total += nums[i];
            nums[i]=-nums[i];
        }
        int noncon=kadanes(nums);
        int wrap=total+noncon;
    
    return max(wrap,nonwrap);}
};
