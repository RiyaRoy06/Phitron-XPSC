#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

        ll n,x,y=0;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        cin>>x;ll b[x];
        for(ll i=0;i<x;i++) cin>>b[i];
        sort(b,b+x);
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<x;j++)
            {
                if(abs(a[i]-b[j])<2) {y++;
                b[j]=1001;break;}
            }
        }
        cout<<y<<endl;

}






