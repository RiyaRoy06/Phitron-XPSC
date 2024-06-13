#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

        ll n,c=0,p,m,x,y,z=0;
        cin>>n;
        map<ll,ll>d;
        for(ll i=1;i<=n;i++)
        {
            ll l,r;
            cin>>l>>r;

            d[l]++;
            d[r+1]--;
        }
        bool ok=true;
        for(auto [idx,value]:d)
        {
            c+=value;
            if(c>2)
            {
                ok=false;
                break;
            }
        }
        if(ok)
            cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
}



