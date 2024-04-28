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
	    vector<ll>v(k);
	    for(ll i=0;i<k;i++)
	    {
	        cin>>v[i];
	    }
        sort(v.begin(),v.end(),greater<ll>());
	    for(ll i=0;i<k;i++)
	    {

	        if(p>=v[i])
                break;
            p+=n-v[i];c++;
	    }
	    cout<<c<<"\n";
	}
}





