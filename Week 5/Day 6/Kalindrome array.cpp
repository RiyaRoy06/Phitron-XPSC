#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll solve(vector<ll>&v)
{
    ll i=0,j=v.size()-1;
    ll p=1;
    while(i<j)
    {
        if(v[i]!=v[j]){
            p=0;break;
        }
        i++;
        j--;
    }
    return p;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n+1);
        for(ll i=0;i<n;i++) cin>>a[i];
        ll i=0,j=n-1,p=-1,x,y;
        while(i<j)
        {
            if(a[i]!=a[j])
            {
                p=1;x=a[i];y=a[j];break;
            }
            i++;
            j--;
        }
        if(p==-1) cout<<"YES"<<"\n";
        else{
            vector<ll>v1,v2;
            for(ll i=0;i<n;i++)
            {
                if(a[i]==x)
                    continue;
                v1.push_back(a[i]);
            }
            for(ll i=0;i<n;i++)
            {
                if(a[i]==y)
                    continue;
                v2.push_back(a[i]);
            }
            ll b1=solve(v1);
            ll b2=solve(v2);
            if(b1==1 || b2==1)
                cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }

    }
}









