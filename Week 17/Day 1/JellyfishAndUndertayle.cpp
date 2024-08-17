#include<bits/stdc++.h>
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
	    ll n,m,a,c=0;
	    cin>>a>>m>>n;
	    vector<ll>v(n);
	    for(ll i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
        ll p=m;
	    for(ll i=0;i<n;i++)
	    {
	        p+=min(v[i],a-1);
	    }
	    cout<<p<<endl;
	
    }
} 
	







