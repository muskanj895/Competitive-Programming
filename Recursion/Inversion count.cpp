#include<iostream>
using namespace std;
int merge(int *a, int s, int e)
{
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    int temp[10005];
    int count=0;
    while(i<=mid && j<=e)
    {
        if(a[i]<=a[j])
        { temp[k++]=a[i++];}
        else
        {
            temp[k++]=a[j++];
            count += mid-i+1;
        }
    }
    while(i<=mid)
    {
        temp[k++]=a[i++];
    }
    while(j<=e)
    {
        temp[k++]=a[j++];
    }
    for(int i=s;i<=e;i++)
    {
        a[i]=temp[i];
    }
    return count;
}
int cnt(int *a, int s, int e)
{
    if(s>=e)
    {
        return 0;
    }
    int mid=(s+e)/2;
    int x=  cnt(a,s,mid);
    int y= cnt(a,mid+1,e);
    int z=merge(a,s,e);
    
    return x+y+z;
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<cnt(arr,0,n-1);

	return 0;
}
