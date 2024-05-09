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
	    ll n,k=0,q,r;
	    cin>>n;
	    string s;cin>>s;
         q=100001;
        for(ll i=0;i<26;i++)
        {
            ll c=0,m=0,p=n-1;
           while(m<=p)
           {
             if(s[m]==s[p])
             {
                m++;
                p--;
             }
             else if(s[m]-'a'==i)
             {
                m++;
                c++;
             }
             else if(s[p]-'a'==i)
             {
                p--;
                c++;
             }
             else
             {
                 c=100001;
                 break;
             }
           }
           q=min(q,c);
        }
        if(q==100001) cout<<-1<<"\n";
        else cout<<q<<"\n";

	}
}












