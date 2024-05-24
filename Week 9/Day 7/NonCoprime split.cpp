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
    ll n,m,c=0,p,q;
    cin>>n>>m;
    for(ll i=n;i<=m;i++)
    {
        for(ll j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
               c++;
               p=j;q=i-j;
            }
        }
        if(c>0) break;
    }
    if(c>0)
        cout<<p<<" "<<q<<"\n";
    else cout<<-1<<"\n";
    }
}




