class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int,int> m;
        vector<int> x;
        for(int i=0;i<nums.size();i++)
        {
            int compliment = target -nums[i];
            if(m.find(compliment) != m.end())
            {
                x.push_back(m[compliment]);
                x.push_back(i);
            }
            else
            {
                m[nums[i]]=i;
            }
        }
        return x;
    }
};
