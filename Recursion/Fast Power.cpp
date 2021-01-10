#include <iostream>

using namespace std;
int fastPower(int a, int n)
{
    if(n==0)
    return 1;
    
    int ans=fastPower(a,n/2);
    ans *= ans;
    if(n&1)
    {
        return a*ans;
    }
        return ans;
}

int main()
{
    int a,n;
    cin>>a>>n;
    cout<<fastPower(a,n);
    

    return 0;
}
