#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        ll sum=0,l=0,r=0,ans=0;
        multiset<ll>m1;
        while(r<n)
        {
            m1.insert(a[r]);
            ll mn,mx;
            mn= *m1.begin(),mx= *m1.rbegin();
            if((mx-mn)<=k){
                ans+=(r-l+1);
            }
            else{
                while(l<r)
                {
                   mn= *m1.begin(),mx= *m1.rbegin();
            if((mx-mn)<=k){
                break;
            } auto it=m1.find(a[l]);
            m1.erase(it);
            l++;
                }
                mn= *m1.begin(),mx= *m1.rbegin();
            if((mx-mn)<=k){
                ans+=(r-l+1);
            }
            }
            r++;
        }
        cout<<ans<<"\n";



}












