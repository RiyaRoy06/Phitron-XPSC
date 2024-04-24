#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;while(t--){
        ll n,k,c=0,p=0;
        cin>>n>>k;
        vector<ll>a(n);
        for(ll i=0;i<n;i++) {cin>>a[i];a[i]+=(i+1);}
        sort(a.begin(),a.end());
        for(ll i=0;i<n;i++)
        {
            p+=a[i];
            if(p>k)
            {
                c++;
            }


        }
        cout<<n-c<<"\n";
    }



}













