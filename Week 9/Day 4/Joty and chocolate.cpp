#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll gcd(ll a,ll b)
{
    return __gcd(a,b);
}
ll lcm(ll a,ll b)
{
    return((a/gcd(a,b))*b);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,a,b,p,q,ans=0;
    cin>>n>>a>>b>>p>>q;
    ans+=((n/a)*p);
    ans+=((n/b)*q);
    ll overlap=(n/(lcm(a,b)));
    ans-=(overlap*(p+q));
    ans+=(overlap*(max(p,q)));
    cout<<ans;
}
