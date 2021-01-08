#include<iostream>
using namespace std;
int main() {
	int arr[64]={0};
	int n,no;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>no;
	}
	int j=0;
	while(no>0)
	{
		int last_idx=(no&1);
		arr[j] += last_idx;
		j++;
		no >>= 1;
	}
	int p=1;
	int ans=0;
	for(int i=0;i<64;i++)
	{
		arr[i]=arr[i] % 3;
		ans += arr[i]*p;
		p=p*2;
	}
	cout<<ans<<endl;
	

	return 0;
}
