class Solution {
public:
    int missingNumber(vector<int>& nums) {
      /*  int miss=0;
        for(int i=0;i<nums.size();i++)
        {
            miss ^=(i+1) ^ nums[i];
        }
        return miss;*/
        int sum =0;
        for(int i=0;i<nums.size();i++)
            sum += nums[i];
        int n =nums.size();
        return (n*(n+1))/2 - sum;
    }
};
