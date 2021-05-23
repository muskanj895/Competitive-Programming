class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_overall=nums[0];
        int max_so_far=nums[0];
        int min_so_far=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            int temp=max_so_far;
            max_so_far=max(nums[i],max(min_so_far*nums[i],max_so_far*nums[i]));
            min_so_far=min(nums[i],min(min_so_far*nums[i],temp*nums[i]));
            max_overall=max(max_overall,max_so_far);
            
        
        }
        return max_overall;
    }
};
