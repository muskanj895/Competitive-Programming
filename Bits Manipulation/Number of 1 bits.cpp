class Solution {
public:
    int hammingWeight(uint32_t n) {
       /* long long ans = __builtin_popcount(n);
        return ans;*/
        int ans =0;
        while(n > 0){
            n = n & (n-1);
            ans++;
        }
        return ans;
    }
};
