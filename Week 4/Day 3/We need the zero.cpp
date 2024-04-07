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
	        p^=a[i];
	    }
	    if(n%2==1)
            cout<<p<<"\n";
        else
        {
            if(p==0) cout<<0<<"\n";
            else cout<<-1<<"\n";
        }
	}
}




