class Solution {
public:
    int reverse(int n)
    {
        int rev=0;
        while(n)
        {
            rev = rev*10 + n%10;
            n= n/10;
        }
        return rev;
    }
    int countNicePairs(vector<int>& nums) {
        int M =1e9 +7;
        int res=0;
        unordered_map<int,int> m;
        for(int i=nums.size()-1; i >= 0;i--)
        {
            int diff=nums[i]-reverse(nums[i]);
            if(m.find(diff) != m.end())
            {
                res = (res +m[diff])%M;
            }
            m[diff]++;
        }
        return res;
    }
};
