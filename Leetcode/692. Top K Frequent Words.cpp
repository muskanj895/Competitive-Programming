
class Solution {
public:
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> freq;
        for(auto w : words){
            freq[w]++;
        }
    
        auto comp = [&](const pair<string,int>& a, const pair<string,int>& b) {
    	    //return true if b is considered to go top a
            return a.second < b.second || (a.second == b.second && a.first > b.first); 
        };
        priority_queue< pair<string,int>, vector<pair<string,int>>, decltype(comp) > pq(freq.begin(),freq.end(),comp);
    
    
        vector<string> output;
    
        while(k!=0){
            output.push_back(pq.top().first);
            pq.pop();
            k--;
        }
        return output;
    }
}
