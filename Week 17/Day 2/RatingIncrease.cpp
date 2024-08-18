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
	    int n,k,m=0,e,f=0,g,h;
    
        string s,p="",d="";
        cin>>s;
        n=s.size();
        p+=s[0];
        
        
        /*for(int i=0;i<n/2;i++)
        {
            if(s[i]==s[(n/2)+i])
            m++;
        }
        if(n &&  ) cout<<-1<<"\n";*/

        for(int i=1;i<n;i++)
        {
            if(s[i]=='0')
            p+=s[i];
            else
            {
                e=i;break;
            }
        }
        
        for(int i=e;i<n;i++)
        {
            d+=s[i];
        }
        if(d.length()>p.length())
        cout<<p<<" "<<d<<"\n";
        else if(d.length()==p.length() && d>p)
        cout<<p<<" "<<d<<"\n";
        else cout<<-1<<"\n";
        
       // cout<<f-e<<"\n";
        
        
    //cout<<m<<" "<<q<<"\n";
    }
} 