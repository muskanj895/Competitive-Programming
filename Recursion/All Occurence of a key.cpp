/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int allOcc(int *a,int i,int n,int key,int *out, int j)
{
    if(i==n)
    {
        return j;
    }
    if(a[i]==key)
    {
        out[j]=i;
        return allOcc(a,i+1,n,key,out,j+1);
    }
    return allOcc(a,i+1,n,key,out,j);
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    int out[1000]={0};
    int cnt=allOcc(a,0,n,key,out,0);
    cout<<cnt<<endl;
    for(int i=0;i<cnt;i++)
    {
        cout<<out[i]<<" ";
    }
    

    return 0;
}
