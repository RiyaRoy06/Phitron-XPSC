#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    ll n,m,c=0,p,q=0,r,l,g;
    cin>>n>>m;
    if(n>m)
    {if((n+m)%3==0 && 2*m>=n)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";}
    else{
      if((n+m)%3==0 && 2*n>=m)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";}
    }
}


