#include <stdio.h>
using namespace std;
int find_ele(int arr[] , int n,int key)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[s]<arr[mid])
        {
            if(key>=arr[s] && arr[mid]>= key)
            {
                e = mid -1;
            }
            else
            {
                s=mid+1;
            }
        }
        else
        {
            if(arr[mid]<=key && key <= arr[e])
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
    }
    return -1;
}

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        int arr[k];
        for(int j=0;j<k;j++)
        {
            cin>>arr[k];
        }
        int key;
        cin>>key;
        cout<<find_ele(arr,n,key)<<endl;
    }
	
	return 0;
}
