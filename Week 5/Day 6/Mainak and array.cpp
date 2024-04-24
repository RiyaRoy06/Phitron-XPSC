#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;while(t--){
        ll n,k,c=0,p=0;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++) {cin>>a[i];}
        if(n==1)
        {
            cout<<0<<"\n";
            continue;
        }
        ll m=a[n-1]-a[0];
        for(ll i=1;i<n;i++)
        {
            m=max(m,a[i]-a[0]);
        }
        for(ll i=0;i<n-1;i++)
        {
            m=max(m,a[n-1]-a[i]);
        }
        for(ll i=1;i<n;i++)
        {
            m=max(m,a[i-1]-a[i]);
        }
        cout<<m<<"\n";
    }
}

















