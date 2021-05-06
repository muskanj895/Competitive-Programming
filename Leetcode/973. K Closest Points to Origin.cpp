class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        static const auto& dist=[](const vector<int>& v)
        {
            return v[0]*v[0] + v[1]*v[1];
        };
        struct Compare{
            bool operator ()(const vector<int>& a, const vector<int>& b){
                return dist(a) < dist(b);
            
            }
        };
        priority_queue<vector<int>,vector<vector<int>>,Compare> pq;
        for(auto x : points)
        {
            pq.push(x);
            if(pq.size() > k)
        {
            pq.pop();
        }
        }
        vector<vector<int>> res;
        while(!pq.empty())
        {
            res.push_back(pq.top());
            pq.pop();
        }
        return res;
        
    }
};
