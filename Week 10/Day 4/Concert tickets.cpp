#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n,m,c=0,p,q=0,r,l,g;
    cin>>n>>m;
    vector<ll>a(n),b(m);
    multiset<ll>s;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    for(ll i=0;i<m;i++){
        cin>>b[i];
        auto x=s.upper_bound(b[i]);
        if(x==s.begin())
            cout<<-1;
        else
        {
            --x;
            cout<<*x;
            s.erase(x);
        }
        cout<<"\n";
    }
}

