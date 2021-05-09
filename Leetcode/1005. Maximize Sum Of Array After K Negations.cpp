//Maximize Sum Of Array After K Negations
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        // greedy using priority queue
        //Time=O(NlogN) space= O(n)
       /* priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0;i<A.size();i++)
        {
            pq.push(A[i]);
        }
        while(K--)
        {
            int h=pq.top();
            pq.pop();
            pq.push(-h);
        }
        int sum=0;
        while(!pq.empty())
        {
            sum +=pq.top();
            pq.pop();
        }
        return sum;
    }*/
        //Greedy using Min element
        //Time = O(KN) space=O(1)
        int sum=0;
        for(int i=0;i<K;i++)
        {
            int h = min_element(A.begin(),A.end())-A.begin();
            A[h] *= -1;
        }
        for(int i=0;i<A.size();i++)
        {
            sum += A[i];
        }
        return sum;
    }
};
