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
        cin>>n;
        vector<ll>a(n),b;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
        b.push_back(abs(a[i]));
        p+=abs(a[i]);
        }
        sort(b.begin(),b.end());
        for(ll i=0;i<n;i++)
        {
            if(a[i]<0) c++;

        }
        if(c%2==1) cout<<p-2*b[0]<<"\n";
        else
       cout<<p<<"\n";
    }



}














