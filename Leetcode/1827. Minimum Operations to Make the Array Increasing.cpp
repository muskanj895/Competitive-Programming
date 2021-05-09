class Solution {
public:
    int minOperations(vector<int>& nums) {
        int h=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            int k=nums[i+1];
            if(nums[i] >= k)
            {
                int l=nums[i]-nums[i+1];
                h += l+1;
                nums[i+1]=nums[i]+1;
                
            }
        }
        return h;
    }
};
