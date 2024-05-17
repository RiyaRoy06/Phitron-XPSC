#include <bits/stdc++.h>
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
       ll n,k,m;
	   cin>>n;
	   vector<ll>a(n);
	   for(ll i=0;i<n;i++) cin>>a[i];
	   map<ll,ll>c;
	   for(ll i=0;i<n;i++)
       {
          for(ll j=2;j*j<=a[i];j++)
          {
              if(a[i]%j==0){
                while(a[i]%j==0)
                    {c[j]++;
                    a[i]/=j;}
              }
          }
          if(a[i]>1)
          {
           c[a[i]]++;
          }
       }
       bool ok=true;
       for(auto[x,y]:c)
       {
           if(y%n!=0)
           {
               ok=false;break;
           }
       }
       if(ok)
        cout<<"YES"<<"\n";
       else cout<<"NO"<<"\n";
    }

}

