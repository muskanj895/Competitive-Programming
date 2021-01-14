#include<iostream>
using namespace std;
int maxWater(int *a, int n)
{
	int left_max =0 , right_max=0;
	int l=0, r=n-1;
	int result=0;
	while(l<=r)
	{
		if(a[l]<a[r])
		{
			if(a[l]>left_max)
			{
				left_max=a[l];
			}
			else
			{
				result += left_max -a[l];
				l++;
			}
		}
		else
		{
			if(a[r]>right_max)
			{
				right_max=a[r];
			}
			else
			{
				result += right_max - a[r];
				r--;
			}
		}
		
	}
	return result;
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<maxWater(arr,n);
	return 0;
}
