#include <iostream>

using namespace std;
void Bubble_sort(int a[], int n)
{
    if(n==1)
    {
        return ;
    }
    for(int j=0;j<n;j++)
    {
        if(a[j]>a[j+1])
        swap(a[j],a[j+1]);
    }
    return Bubble_sort(a,n-1);
}
void Bubble_sort_recursively(int a[],int j, int n)
{
    if(n==1)
    {
        return;
    }
    if(j == n-1)
    {
        return Bubble_sort_recursively(a,0,n-1);
    }
    if(a[j]>a[j+1])
    {
        swap(a[j],a[j+1]);
    }
    return Bubble_sort_recursively(a,j+1,n);
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
    //Bubble_sort(a,n);
    Bubble_sort_recursively(a,0,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    

    return 0;
}
