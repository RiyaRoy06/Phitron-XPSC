#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
cin.tie(NULL);
ll n,m;
cin>>n>>m;
//ll a[n],b[m],c[n+m];
vector<ll>a(n),b(m),c;
for(ll i=0;i<n;i++) {cin>>a[i];c.push_back(a[i]);
}
for(ll i=0;i<m;i++) {cin>>b[i];c.push_back(b[i]);}
sort(c.begin(),c.end());
for(ll i=0;i<(n+m);i++)
{
    cout<<c[i]<<" ";
}
cout<<endl;
}

