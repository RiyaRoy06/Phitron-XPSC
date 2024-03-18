#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
cin.tie(NULL);
int t;cin>>t;while(t--){
ll n,b,c=0,p=0;
cin>>n;ll a[n];
for(ll i=0;i<n;i++)
{
    cin>>a[i];

}
for(ll i=0;i<n;i++)
{
    if(a[i]>i)
        c=max(c,a[i]-i-1);

}
 cout<<c<<endl;
}
}



