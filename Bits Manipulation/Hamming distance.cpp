//There are three methods which can be used to find the hamming distance.
/* 1. By and function 
2. by n & n-1 which will remove first set bit 
3. Built in  function.*/
class Solution {
public:
    int hammingDistance(int x, int y) {
        int xored = x  ^ y;
        //complexity is the no of bits it has
       /* int ans =0;
        while(xored != 0)
        {
            ans += xored&1;
            xored = xored >> 1;
        }
        return ans;*/
        // faster method- complexity is no of set bit
       /* int ans=0;
        while(xored > 0)
        {
            xored= xored & (xored-1);
            ans++;
        }
        return ans;*/
        //builtin function
        int ans = __builtin_popcount(xored);
        return ans;
        

    }
};
