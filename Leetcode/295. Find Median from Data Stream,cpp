class MedianFinder {
public:
    priority_queue<int> leftheap;
    priority_queue<int, vector<int>, greater<int>> rightheap;
    double median=0;
    /** initialize your data structure here. */
    MedianFinder() {
        
    }
    
    void addNum(int num) {
       if(leftheap.empty() && rightheap.empty()) {
           leftheap.push(num);
        median=num;}
        else if(leftheap.size() > rightheap.size())
        {
            if(num>median)
            {
                rightheap.push(num);
                                
            }
            else
            {
                rightheap.push(leftheap.top());
                leftheap.pop();
                leftheap.push(num);
            }
            median =(leftheap.top() + rightheap.top())/2.0;
        }
        else if(leftheap.size() == rightheap.size())
        {
            if(num<median)
            {
                leftheap.push(num);
                median=leftheap.top();
            }
            else
            {
                rightheap.push(num);
                median=rightheap.top();
            }
        }
        else
        {
            if(num <median)
            {
                leftheap.push(num);
            }
            else
            {
                leftheap.push(rightheap.top());
                rightheap.pop();
                rightheap.push(num);
            }
             median =(leftheap.top() + rightheap.top())/2.0;
        }
    }
    
    double findMedian() {
       // double ans=median;
        return median;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
