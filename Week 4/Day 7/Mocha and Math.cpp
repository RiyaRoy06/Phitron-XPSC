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
	    ll n,p=0,q=1,m=0,k;
	    cin>>n;
	    vector<ll>a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        k=a[0];
        for(ll i=0;i<n;i++)
        {
            k=k&a[i];
        }

        cout<<k<<"\n";

	}
}










