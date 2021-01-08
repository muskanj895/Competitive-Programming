/*
We are given two coins of value x and y. We have to find the maximum of value of a XOR b where x <= a <= b <= y.

Input Format
We are given two integers x and y

Constraints
l <= r <= 1000

Output Format
Print the maximum value of a XOR b

Sample Input
5
6
Sample Output
3
Explanation
If a and b are taken to be 5. Then a xor b = 0
If a and b are taken to be 6. Then a xor b = 0
If a is 5 and b is 6. Then a xor b is 3.*/
// Brute force solution
#include<iostream>
using namespace std;
int main () {
	int m,n;
	cin>>m>>n;
	int max1=0;
	for(int i=m;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			int k=i^j;
			max1=max(k,max1);
		}
	}
	cout<<max1;
	return 0;
}
//Efficient method
#include<iostream>
using namespace std;
int main () {
	int m,n;
	cin>>m>>n;
	int res=m^n;
	int k=0;
	
	while(res>0)
	{
		
		k++;
		res>>=1;

	}
	int p=1;
	int s=0;
	while(k--)
	{
		s=s+1*p;
		p=p*2;
	}
	cout<<s;
	//cout<<max1;
	return 0;
}
