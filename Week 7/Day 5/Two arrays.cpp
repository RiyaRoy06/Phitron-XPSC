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
	    ll n,k=0,c=0,m=1,p=0,q,r;
	    cin>>n;
	    vector<ll>a(n),b(n);
	    for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(ll i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(b.begin(),b.end());
        for(ll i=0;i<n;i++)
        {
           if((b[i]-a[i])>1 || a[i]>b[i])
           {c=1;break;}
        }
        if(c==1) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";

	}
}











