#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    double b=0,c=0,d=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            b++;
        }
        else if(a[i]<0)
        {
            c++;
        }
        else
        {
            d++;
        }
    }
    printf("%.6lf\n",b/n);
    printf("%.6lf\n",c/n);
    printf("%.6lf\n",d/n);
}
