#include<iostream>
using namespace std;
char digit[][10] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
void keypad(char *a,char *out,int i, int j)
{
	if(a[i]=='\0')
	{
		out[j]='\0';
		cout<<out<<endl;
		return;
	}
	
	int value =a[i]-'0';
	for(int k=0;digit[value][k]!='\0';k++)
	{
		out[j]=digit[value][k];
		keypad(a,out,i+1,j+1);
	}
	return;

}
int main() {
	char a[10];
	cin>>a;
	char out[100];
	keypad(a,out,0,0);

	return 0;
}
