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
        ll n,k,p=0,d,f,g;
        cin>>n>>k;
        ll a[n+1];
        d=n-k+1;
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]%2==1)
            p=i;
            if((i-p)>=k)
            d--;
        }


        cout<<d<<endl;

    }
}

