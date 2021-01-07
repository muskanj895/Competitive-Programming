#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i =0; i<n-1;i++)
	{
		int small_idx=i;
		for(int j=i;j<n;j++)
		{
			if(arr[j]<arr[small_idx])
			small_idx=j;
		}
		swap(arr[i],arr[small_idx]);
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
