#include<iostream>
#include<climits>
using namespace std;
bool isPossible(int arr[], int n, int m, int curr_min)
{
	int student=1;
	int page_readed=0;

	for(int i=0;i<n;i++)
	{
		if(page_readed + arr[i]>curr_min)
		{
			student++;
			page_readed=arr[i];
			if(student>m)
			return false;
		}
		else
		{
			page_readed += arr[i];
		}
	}
	return true;
}
int find_pages(int arr[], int n, int m)
{
	int sum=0;
	if(n<m)
	return -1;
	for(int i=0;i<n;i++)
	{
		sum += arr[i];
	}
	int s=arr[n-1];
	int e= sum;
	int ans=INT_MAX;
	while(s<=e)
	{
		int mid =(s+e)/2;
		if(isPossible(arr,n,m,mid))
		{
			ans=min(mid,ans);
			e=mid-1;

		}
		else
		{
			s=mid+1;
		}
	}
	return ans;
}
int main() {
	int k;
	cin>>k;
	for(int i=0;i<k;i++)
	{
		int n,m;
		cin>>n>>m;
		int arr[n];
		for(int j=0;j<n;j++)
		{
			cin>>arr[j];
		}
		cout<<find_pages(arr,n,m)<<endl;
	}
	return 0;
}
