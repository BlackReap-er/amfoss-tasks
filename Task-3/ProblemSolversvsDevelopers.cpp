#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,s=0;
    cin>>n>>m;
    int d[n],ps[m];
    for(i=0;i<n;i++)
        cin>>d[i];
    for(i=0;i<m;i++)
        cin>>ps[i];
    int k=sizeof(ps)/sizeof(ps[0]);
    sort(ps,ps+k);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (d[i]<ps[j])
            {
                s+=ps[j];
                ps[j] = 0;
                d[i]=0;
                break;
            }
        }
    }
    int f=1;
    for (i = 0; i < n; i++)
    {
        if(d[i]!=0)
            f=0;
    }
    if(f==1)
        cout<<"YES"<<endl<<s;
    else
        cout<<"NO";
    return 0;
}