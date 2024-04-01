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
        ll n,s=0,p=0,d=0;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++)
        {
            s+=abs(a[i]);
            if(a[i]<=0)
            {
                if(a[i]<0) d=1;
            }
            else
            {
                if(d==1) p++;d=0;
            }
        }
        if(d==1) p++;
        cout<<s<<" "<<p<<"\n";
    }
}

