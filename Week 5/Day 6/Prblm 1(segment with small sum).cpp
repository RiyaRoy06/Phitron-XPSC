#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        ll n,s;
        cin>>n>>s;
        vector<ll>a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        ll sum=0,l=0,r=0,ans=0;
        while(r<n)
        {
            sum+=a[r];
            if(sum<=s)
                ans=max(ans,r-l+1);
            else {
                sum-=a[l];
                l++;
            }
            r++;
        }
        cout<<ans<<"\n";



}










