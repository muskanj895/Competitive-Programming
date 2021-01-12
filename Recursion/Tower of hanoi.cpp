#include<iostream>
using namespace std;
void TOH(int n, char src, char helper, char des)
{
	if(n==0)
	{
		return;
	}
	TOH(n-1,src,des,helper);
	cout<<"Moving ring "<<n<<" from "<<src<<" to "<<des;
	cout<<endl;
	TOH(n-1,helper,src,des);
}
int main() {
	int n;
	cin>>n;
	TOH(n,'A','C','B');
	return 0;
}
