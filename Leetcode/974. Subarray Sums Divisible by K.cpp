class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        int csum=0, ans=0;
        map<int,int> m;
        m[0]=1;
        for(int i=0;i<A.size();i++)
        {
            csum += A[i];
            int l= (((csum%K)+K)%K);
            ans += m[l];
            m[l]++;
        }
        return ans;
    }
};
