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
        ll n,c=0,p,m,x,y,z=0;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)
            cin>>a[i];
        for(ll i=0;i<n;i++)
        {
            c++;
            if(a[i]==c) c++;
            else c;
        }
        cout<<c<<"\n";
    }
}




