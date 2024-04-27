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
	    ll n,m,k,c=0;
	    cin>>n>>k;
	    m=(k-1)/(n-1);
	    cout<<k+m<<"\n";
	}
}



