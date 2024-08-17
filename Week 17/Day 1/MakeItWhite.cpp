#include<bits/stdc++.h>
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
	    ll n,k,m,e,f,g,h;
        
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B')
            {e=i;break;}
        }
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='B')
            {f=i+1;break;}
        }
        cout<<f-e<<"\n";
        
        
    //cout<<m<<" "<<q<<"\n";
    }
} 
	







