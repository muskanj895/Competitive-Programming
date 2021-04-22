class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans;
        for(int i=0;i<=num;i++)
        {
            int x =__builtin_popcount(i);
            ans.push_back(x);
        }
        return ans;
    }
};
