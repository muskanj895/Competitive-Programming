#include<iostream>
using namespace std;
void counting(int *a, int n)
{
	int largest=-1;
	for(int i=0;i<n;i++)
	{
		largest=max(largest,a[i]);
	}
	
	int freq[largest+1]={0};
	for(int i=0;i<n;i++)
	{
		freq[a[i]]++;
	}
	int j=0;
	for(int i=0;i<=largest;i++)
	{
		while(freq[i]>0)
		{
			a[j]=i;
			freq[i]--;
			j++;
		}
	}
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];

	}
	counting(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";

	}

	return 0;
}
