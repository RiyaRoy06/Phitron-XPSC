#include <bits/stdc++.h>
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
	    ll n,k=0,m=0;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)
        cin>>a[i];
        map<ll,ll>mp;
        for(ll i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second>1)
            {
                k++;m++;
            }
            else{
                if(k>m) m++;
                else k++;
            }
        }
        m++;
        ll p=min(k,m);
        cout<<p<<"\n";
    }
} 
