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
	    ll n,p=0,q,m;
	    cin>>n;
	    ll a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        p=p^a[i];
	    }
	    q=p;
	    for(ll i=0;i<n;i++){
                m=a[i]^p;
	    if(q>m)
            q=m;
	    }
	    cout<<q<<endl;
	}
}


