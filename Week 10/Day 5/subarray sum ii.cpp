#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n,m,c=0,p,q=0,r,l,g;
    cin>>n>>m;
    vector<ll>a(n);
    map<ll,ll>mp;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mp[q]=1;
    for(ll i=0;i<n;i++)
    {
        q+=a[i];
        c+=mp[q-m];
        mp[q]++;
    }
    cout<<c;

}

