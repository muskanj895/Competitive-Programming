class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
       priority_queue<int> w;
        for(int i=0;i<n;i++)
        {
            w.push(stones[i]);
        }
        while(w.size() > 1){
        int y=w.top();
        w.pop();
        int x=w.top();
        w.pop();
        if(x == y)
        {
            
        }
        else
        {
            w.push(y-x);
            
        }}
        if(w.empty())
            return 0;
        else
        return w.top();
    }
};
