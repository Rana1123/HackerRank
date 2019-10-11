#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3],b[3],i,cou=0,co=0;
    for(i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<3;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            cou++;
        }
        else if(a[i]==b[i])
        {
            continue;
        }
        else
        {
            co++;
        }
    }
    cout<<cou<<" "<<co<<endl;
}
