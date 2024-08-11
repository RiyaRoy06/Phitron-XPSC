#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	
	    ll n,k,m=0,q;
        cin>>n>>k>>q;
        vector<ll>a(k+2);
        for(ll i=0;i<=k;i++)
        cin>>a[i];
        for(ll i=0;i<k;i++)
        {
            if(__builtin_popcount(a[k]^a[i])<=q)
               m++;
        }
    cout<<m<<"\n";
    
} 
	








