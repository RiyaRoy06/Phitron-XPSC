#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n,m,c=0,p,q=0,r,l;
    cin>>n>>m;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            for(ll k=j+1;k<n;k++)
            {
                if((a[i]+a[j]+a[k])==m)
                    {p=i+1,r=j+1,l=k+1;c++;break;}
            }
        }
    }
    if(c>0) cout<<p<<" "<<r<<" "<<l;
    else
    cout<<"IMPOSSIBLE";
}







