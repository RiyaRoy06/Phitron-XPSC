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
	    string s;
	    cin>>s;

	    for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='1') c++;
            else p++;
        }
	    for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                if(p>0) p--;
                else break;
            }
            else{
                if(c>0) c--;
                else break;
            }
        }

        cout<<c+p<<"\n";
	}
}











