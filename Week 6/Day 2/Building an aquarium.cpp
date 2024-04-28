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
	    ll n,k,a,c=0,m=INT_MAX,p=0;
	    cin>>n>>k;
	    vector<ll>v(n);
	    for(ll i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }

	    while(c<=m)
	    {
	        ll mid=(c+m)/2;
	        ll sum=0;
	        for(ll i=0;i<n;i++){
	            sum+=max(0LL,mid-v[i]);
	        }
	       if(sum<=k)
            {p=mid;
           c=mid+1;}
	       else m=mid-1;

	    }
	    cout<<p<<"\n";
	}
}




