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
	    ll n,k,m,p=0,q;
        cin>>n;
        q=k;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)
        cin>>a[i];
        if(a[0]==1) a[0]=2;
        for(ll i=1;i<n;i++)
        {
            if(a[i]==1)
            a[i]++;
            if(a[i]%a[i-1]==0)
            {
                a[i]++;
            }
        }
        for(ll i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<"\n";
    }
} 
	








