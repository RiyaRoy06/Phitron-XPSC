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
        ll n,x,y;
        cin>>n;
        string s,m="";
        cin>>s;
        for(ll i=n-1;i>=0;i--)
        {
            if(s[i]=='0')
            {
                x=(s[i-2]-'0')*10+s[i-1]-'0';
                i-=2;
            }
            else x=s[i]-'0';
            m=char(x+'a'-1)+m;
        }
        cout<<m<<"\n";
    }
}




