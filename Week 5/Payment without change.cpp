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
	    ll a,b,n,s;
        cin>>a>>b>>n>>s;
        if((a*n + b)<s || (s%n)>b)
            cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
	}
}












