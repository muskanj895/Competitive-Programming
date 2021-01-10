#include<iostream>
#include<cstring>
using namespace std;
int convert(char *a, int n)
{
	if(n==0)
	return 0;
	int digit=a[n-1]-'0';
	int small_ans=convert(a,n-1);
	return (small_ans*10 + digit);
}
int main() {
	char a[10];
	cin>>a;
	int n=strlen(a);
	cout<<convert(a,n);
	return 0;
}
