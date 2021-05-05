typedef pair<int,int> P;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        priority_queue<P, vector<P> ,greater<P>> pq;
        for(auto &x : m)
        {
            if(pq.size() < k)
            {
                pq.push(make_pair(x.second,x.first));
            }
            else
            {
                if(pq.top().first <x.second)
                {
                    pq.pop();
                    pq.push(make_pair(x.second,x.first));
                }
                
            }
        }
        vector<int> ans;
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
