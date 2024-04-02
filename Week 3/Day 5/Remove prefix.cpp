#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n);
        ll s=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        map<ll,ll>mp;
        for(ll i=(n-1);i>=0;i--)
        {
            mp[a[i]]++;
            if(mp[a[i]]>=2)
            {
                s=i+1;break;
            }
        }
        cout<<s<<"\n";
    }
}


