#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;while(t--){
        ll n,k,p=0;
        cin>>n;
        //string s;cin>>s;
        vector<ll>a(n),b(n),c(n);
        vector<pair<ll,ll>>pa,pb,pc;
        for(ll i=0;i<n;i++){cin>>a[i];pa.push_back({a[i],i});}
        for(ll i=0;i<n;i++){cin>>b[i];pb.push_back({b[i],i});}
        for(ll i=0;i<n;i++){cin>>c[i];pc.push_back({c[i],i});}
        sort(pa.begin(),pa.end(),greater<>());
        sort(pb.begin(),pb.end(),greater<>());
        sort(pc.begin(),pc.end(),greater<>());
        for(ll i=0;i<3;i++)
        {
            for(ll j=0;j<3;j++)
            {
                for(ll k=0;k<3;k++)
                {
                    if(pa[i].second!=pb[j].second && pb[j].second!=pc[k].second && pa[i].second!=pc[k].second)
   	  	 	  	        p=max(p,(pa[i].first+pb[j].first+pc[k].first));
                }
            }
        }
        cout<<p<<"\n";
    }



}
















