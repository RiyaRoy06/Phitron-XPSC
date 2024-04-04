#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll p[2000005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        ll a[n];

        for(ll i=1;i<=n;i++)
           {
               cin>>a[i];
               p[i]=(p[i-1]+a[i]);
           }
        while(q--)
        {
          ll b,c,d;
          cin>>b>>c>>d;
          ll ans=p[n]-(p[c]-p[b-1])+(d*(c-b+1));
          if(ans%2==0)
            cout<<"NO"<<endl;
          else cout<<"YES"<<endl;
        }
    }
}


