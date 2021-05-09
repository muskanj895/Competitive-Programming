class Solution {
public:
    bool canJump(vector<int>& nums) {
      //greedy from backside approach
        int last_good_idx=nums.size()-1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(i+nums[i] >= last_good_idx)
            {
                last_good_idx=i;
            }
            
        }
        return last_good_idx == 0;
      //greedy from front side approach
        int ans =0;
        for(int i=0;i<nums.size();i++)
        {
            if(i>ans)
                return false;
            ans = max(ans,nums[i]+i);
                
        }
        return true;
    }
};
