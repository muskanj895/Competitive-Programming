#include<iostream>
using namespace std;
int main() {
	int n,p;
	cin>>n>>p;
	int ans=1;
	while(p>0)
	{
		int last_bit=(p&1);
		if(last_bit)
		{
			ans=ans*n;
		}
		p>>=1;
		n=n*n;
	}
	cout<<ans;
	return 0;
}
