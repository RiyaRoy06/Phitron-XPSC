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
	    string s;
	    cin>>s;
	    set<ll>n;
	    for(ll i=0;i<s.size()/2;i++)
        {
            n.insert(s[i]-'a');
        }
        if(n.size()>1)
            cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
	}
}











