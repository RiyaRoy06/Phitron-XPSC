#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
    ll n,m,c=0,p,q;
    cin>>n;
    vector<ll>a(n),f(n+2,0);
    for(ll i=0;i<n;i++)
        cin>>a[i];
    for(ll i=0;i<n;i++)
    {
        if(a[i]>n)
            continue;
        f[a[i]]++;
    }
    for(ll i=1;i<=n;i++)
    {
        q=0;
        for(ll j=1;j*j<=i;j++)
        {
            if(i%j==0)
            {
                q+=f[j];
                if(j*j!=i)
                {
                    q+=f[i/j];
                }
            }
        }
        c=max(c,q);
    }
    cout<<c<<"\n";

    }
}
