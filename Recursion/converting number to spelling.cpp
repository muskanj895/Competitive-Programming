#include<iostream>
using namespace std;
char word[][10]={"zero","one","two","three"," four","five","six","seven","eight","nine"};
void convert(int n)
{
    if(n==0)
    return;
    convert(n/10);
    int digit=n%10;
    cout<<word[digit]<<" ";
    return;
}
int main() {
	int n;
	cin>>n;
	convert(n);

	return 0;
}
