#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

        ll n,c=0,p,m,x,y,z=0;
        cin>>n>>m;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)
            cin>>a[i];
        vector<ll>d(n+1);
        for(ll i=1;i<=m;i++)
        {
            ll l,r;
            cin>>l>>r;
            l--,r--;
            d[l]++;
            d[r+1]--;
        }
        for(ll i=1;i<=n;i++)
        {
            d[i]=d[i-1]+d[i];
        }
        sort(a.rbegin(),a.rend());
        sort(d.rbegin(),d.rend());

        for(ll i=0;i<n;i++)
        {
            c+=(1LL*d[i]*a[i]);
        }
        cout<<c<<"\n";
}



