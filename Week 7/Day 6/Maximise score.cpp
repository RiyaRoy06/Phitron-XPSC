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
	    ll n,k=0,c=0,m=INT_MAX,p=0,q,r;
	    cin>>n;
	    vector<ll>a(n),b(n-1),v(n);
	    for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n-1;i++)
        {
           b[i]=abs(a[i]-a[i+1]);
        }
        if(n>=2)
        {
            m=min(m,b[0]);
        }
        if(n>=2)
        {
            m=min(m,b[n-2]);

        }
        for(ll i=1;i<n-1;i++)
        {
            q=max(b[i-1],b[i]);
            m=min(m,q);
        }

        cout<<m<<"\n";

	}
}












