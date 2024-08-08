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
	    ll n,k,m=0,p=0,q;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)
        cin>>a[i];
        sort(a.begin(),a.end());
        for(ll i=1;i<101;i++)
        {
            ll d=0,b=n-1,c=0;
            while(d<b)
            {
            if(a[d]+a[b]>i) 
            b--;
            else if(a[d]+a[b]<i) 
            d++;
            else
            {
            d++,b--,c++;
            } 
            }
            p=max(p,c);
       }
        cout<<p<<"\n";
    }
} 
	








