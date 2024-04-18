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
	    ll n,p=0,q,m,k;
	    cin>>n>>k;
	    vector<ll>a(n);
	    for(ll i=0;i<n;i++) cin>>a[i];
	    q=-1;
	    for(ll i=0;i<n;i++)
        {
            if((a[i]&k)==k){
                q&=a[i];
            }

        }
        if(q==k)
        cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
	}
}







