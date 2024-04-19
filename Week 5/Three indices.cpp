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
	    ll n,s=0,p,q,r;
        cin>>n;
        vector<ll>a(n+1);
        for(ll i=1;i<=n;i++) cin>>a[i];
        for(ll i=1;i<=n-2;i++)
        {
                    if(a[i]<a[i+1] && a[i+1]>a[i+2])
                    {
                        s++;
                        p=i;q=i+1;r=i+2;
                    }

        }
        if(s==0) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n"<<p<<" "<<q<<" "<<r<<"\n";
	}
}













