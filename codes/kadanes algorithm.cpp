class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_sum=0;
        int max_so_far=0;
        int max_num =*max_element(nums.begin(),nums.end());
            if(max_num < 0)
                return max_num;
        for(int i=0;i<nums.size();i++)
        {
            current_sum += nums[i];
            if(current_sum < 0)
                current_sum=0;
            max_so_far=max(current_sum,max_so_far);
        }
        return max_so_far;
    }
};
