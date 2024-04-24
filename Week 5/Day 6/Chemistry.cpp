#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;while(t--){
        ll n,k;
        cin>>n>>k;
        string s;cin>>s;
        map<char,ll>mp;
        for(ll i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        ll c=0;
        for(auto x:mp)
        {
            if(x.second%2!=0) c++;
        }
        if((c-1)<0) c=0;
        else c=c-1;
        if(k>=c && k<=n)
            cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";

    }
}







