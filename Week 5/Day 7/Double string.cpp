#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;while(t--){
        ll n,k,c=0,p=0;
        cin>>n;
        //string s;cin>>s;
        vector<string>s(n);
        map<string,bool>mp;
        for(ll i=0;i<n;i++) cin>>s[i];
        for(ll i=0;i<n;i++)
        {
            mp[s[i]]=true;
        }
        for(ll j=0;j<n;j++)
        {
            bool flag=false;
            for(ll i=1;i<=s[j].size();i++)
            {
                string s1=s[j].substr(0,i);
                string s2=s[j].substr(i,s[j].size()-1);

                if(mp[s1] && mp[s2])
                {
                    flag=true;
                    break;
                }
            }
            if(flag==true) cout<<1;
            else cout<<0;

        }cout<<"\n";

    }



}















