#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
    ll n,m;
    cin>>n>>m;
    string s[n];
    for(ll i=0;i<n;i++) cin>>s[i];
    ll mx=INT_MAX;
    for(ll i=0;i<n;i++)
    {
       for(ll j=i+1;j<n;j++)
       {
       ll c=0;
       for(ll k=0;k<m;k++)
       {
          c+=abs(s[i][k]-s[j][k]);
       }
       mx=min(mx,c);
       }
    }
    cout<<mx<<"\n";

}
}
