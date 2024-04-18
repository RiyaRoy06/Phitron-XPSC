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
	    while((q*2)<=n)
        {
            q=q*2;
            p++;
        }
        for(ll i=(p-1);i>=0;i--)
        {
            if((1<<i)&n)
            {
                m=m|(1<<i);
            }
        }

        cout<<m<<" "<<q<<"\n";

	}
}








