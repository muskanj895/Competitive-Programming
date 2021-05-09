class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
      //first method
        priority_queue<int> pq;
        int ans=1;
        for(int i=0;i<rectangles.size();i++)
        {
            pq.push(min(rectangles[i][1],rectangles[i][0]));
        }
         int a=pq.top();
                     pq.pop();
        while(!pq.empty())
        {
         int b=pq.top();
            pq.pop();
         if( a == b)
         {
             ans++;
         }
            else
                break;
        }
        return ans;
        //second method
            int count=0;
        int globalmax=0;
        for(vector<int> vect : rectangles)
        {
            int currmax= min(vect[0] , vect[1]);
            if(currmax > globalmax)
            {
                count =1;
                globalmax=currmax;
            }
            else if(currmax == globalmax)
            { 
            count++;}            
        }
        return count;
        //THird method
        map<int, int> countsOfRectangles;
        for(vector<int> vec : rectangles) {
            countsOfRectangles[min(vec[0], vec[1])]++;
        }
        return (--countsOfRectangles.end())->second;
    }
            
    
};
