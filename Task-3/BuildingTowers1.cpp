#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;
int count(int a[],int n)
{
    int c=1,i,m=1,r=a[0];
    for(i=1;i<n;i++)
    {
        if (a[i] == a[i-1])
            c++;
        else
        {
            if(m<c)
            {
                m=c;
                r=a[i-1];
            }
            c=1;
        }
    }
    if(m<c)
    {
        m=c;
        r=a[n-1];
    }
    return m;
}
int hashsize(int a[],int n)
{
    int i,c=0;
    unordered_set<int> s;
    for(i=0;i<n;i++)
    {
        if(s.find(a[i])==s.end())
        {
            s.insert(a[i]);
            c++;
        }
    }
    return c;
}
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    cout<<count(a,n)<<" "<<hashsize(a,n);
}