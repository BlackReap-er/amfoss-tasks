#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i;
    long long int c=0,n;
    cin>>n;
    for(i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            c++;
            if(n/i!=i)
             c++;
        }         
    }
    cout<<c;
    return 0;
}
