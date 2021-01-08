#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int k;
		cin>>k;
		int count =0;
		while(k)
		{
			count += k& 1;
			k>>=1;
		}
		cout<<count<<endl;

	}
	return 0;
}
