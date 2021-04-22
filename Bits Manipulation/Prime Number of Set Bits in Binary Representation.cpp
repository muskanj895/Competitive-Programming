class Solution {
public:
    bool prime(int n)
    {
         if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
    }
    int countPrimeSetBits(int L, int R) {
        int count =0;
        for(int i =L ;i<=R;i++)
        {
            int x = __builtin_popcount(i);
           if(prime(x))
               count++;
            
        }
        return count;
    }
};
