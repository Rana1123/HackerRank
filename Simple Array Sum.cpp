#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000],sum=0,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<sum<<endl;
}
