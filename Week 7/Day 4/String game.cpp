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
	    ll n,m,k,c=0,p=0,q,r;
	    cin>>n;
	    string s;
	    cin>>s;

	    for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='1') c++;
            else p++;
        }
        m=min(c,p);
	    if(m%2==0)
        cout<<"Ramos"<<"\n";
        else cout<<"Zlatan"<<"\n";
	}
}












