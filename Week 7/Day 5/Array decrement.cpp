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
	    ll n,k=0,c=0,m=0,p=0,q,r;
	    cin>>n;
	    vector<ll>a(n),b(n),v(n);
	    for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n;i++)
        {
            cin>>b[i];
        }

        for(ll i=0;i<n;i++)
        {
           m=max(m,a[i]-b[i]);
        }
        for(ll i=0;i<n;i++)
        {
            if((a[i]-m)<0)
              v[i]=0;
              else v[i]=a[i]-m;
        }
        for(ll i=0;i<n;i++)
        {
            if(v[i]!=b[i])
              {
                  c=1;break;
              }
        }
        if(c==1) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";

	}
}











