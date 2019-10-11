#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[10],i,sum=0;
    int n;
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
