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
        ll x=0,y=0;
        string s,m;
        cin>>s>>m;
        for(ll i=0;i<s.size()-1;i++)
            {
              if(s[i]=='X') x++;
            }
        for(ll i=0;i<m.size()-1;i++)
            {
              if(s[i]=='X') y++;
            }
        if(s[s.size()-1]=='S'){
        if(m[m.size()-1]=='S')
        {
            if(x>y) cout<<"<"<<"\n";
            else if(x<y) cout<<">"<<"\n";
            else cout<<"="<<"\n";
        }
        else cout<<"<"<<"\n";
        }
        else if(s[s.size()-1]=='M'){
            if(m[m.size()-1]=='S')
                cout<<">"<<"\n";
            else cout<<"<"<<"\n";
        }
        else{
           if(m[m.size()-1]=='M'||m[m.size()-1]=='S') cout<<">"<<"\n";
           else
           {
               if(x>y) cout<<">"<<"\n";
            else if(x<y) cout<<"<"<<"\n";
            else cout<<"="<<"\n";
           }
        }
    }
}



