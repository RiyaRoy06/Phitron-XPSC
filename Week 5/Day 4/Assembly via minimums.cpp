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
	    ll n,k;
        cin>>n;
        k=(n*(n-1))/2;
        ll a[n],b[k];
        for(ll i=0;i<k;i++) {cin>>b[i];}
        sort(b,b+k);
        ll x=1,p=0;
        ll c=n-x;
        while(n-x>0)
        {
            a[p++]=b[c-1];
            x++;
            c+=n-x;
        }
        a[n-1]=1000000000;
        for(ll i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;

	}
}


