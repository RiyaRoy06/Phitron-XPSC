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
	    ll n,k,m,p=0,q;
        cin>>n>>m>>k;
        q=k;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)
        cin>>a[i];
        sort(a.begin(),a.end(),greater<ll>());
        while(p<q)
        {
            ll x=p+(q-p+1)/2;
            ll c=0;
            for(ll i=0;i<k;i++)
            {
                if(i%x<n)
                c+=a[i%x];
            }
            if(c>=m)
            p=x;
            else q=x-1;
        }
        if(p==k) cout<<"Infinity"<<"\n";
        else if(p==0)
        cout<<"Impossible"<<"\n";
        else
        cout<<p-1<<"\n";
    }
} 
	








