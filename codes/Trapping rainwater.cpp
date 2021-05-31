//Brute force approach
class Solution {
    
public:
    int kadanes(vector<int> &nums)
    {
        int max_so_far=INT_MIN;
        int curr=0;
       
        for(int i=0;i<nums.size();i++)
        {
            curr += nums[i];
            if(curr < 0)
                curr=0;
            max_so_far=max(curr,max_so_far);
        }
        return max_so_far;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
         int large=*max_element(nums.begin(),nums.end());
        {
            if(large < 0)
                return large;
        }
        int nonwrap=kadanes(nums);
        //int noncon=0;
        int total=0;
        for(int i=0;i<nums.size();i++)
        {
            total += nums[i];
            nums[i]=-nums[i];
        }
        int noncon=kadanes(nums);
        int wrap=total+noncon;
    
    return max(wrap,nonwrap);}
};
//better appraoch using prefix and sufix
// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        const int N=1e6+2;
        int l[N], r[N];
        int res=0;
        l[0] = arr[0];
    r[n - 1] = arr[n - 1];
        for(int i=1;i<n;i++)
        {
            l[i]=max(arr[i],l[i-1]);
        }
        for(int i=n-2;i>=0;i--)
        {
            r[i]=max(arr[i],r[i+1]);
        }
        for(int i=0;i<n;i++)
        {
            res += min(r[i],l[i])-arr[i];
        }
        return res;
        // Code here
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends
// optimized approach
// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        int l=0;
        int r=n-1;
        int leftmax=0, rightmax=0;
        int res=0;
        while( l <= r){
        if(arr[l] <= arr[r])
        {
            if(leftmax < arr[l])
            {
                leftmax=arr[l];
            }
            else
            res += leftmax-arr[l];
            l++;
        }
        else
        {
            if(rightmax < arr[r])
            {
                rightmax=arr[r];
            }
            else
            res += rightmax-arr[r];
            r--;
        }
    }
    return res;
        // Code here
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends
