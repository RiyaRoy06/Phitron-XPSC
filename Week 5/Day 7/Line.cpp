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
        string s;cin>>s;
        vector<ll>d;
        for(ll i=0;i<n;i++)
        {
            ll l=i,r=n-i-1;
            if(s[i]=='L')
            {
                if(r>l){
                    c++;
                    p+=r;
                    d.push_back(r-l);
                }
                else p+=l;
            }
            else{
                if(l>r){
                    c++;
                    p+=l;
                    d.push_back(l-r);
                }
                else p+=r;
            }
        }
        vector<ll>a(n+1);
        for(ll i=c;i<=n;i++)
            a[i]=p;
        sort(d.begin(),d.end(),greater<ll>());
        for(ll i=c-1;i>=1;i--)
        {
            p-=d.back();
            d.pop_back();
            a[i]=p;
        }
        for(ll i=1;i<=n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";

    }



}














