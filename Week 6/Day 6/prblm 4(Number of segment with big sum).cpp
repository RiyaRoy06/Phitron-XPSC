#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

        ll n,m,k,c=0,q=0,r;
        cin>>n>>m;
        vector<ll>v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        ll i=0,j=0;
        while (i < n)
        {
            q+=v[i];
            while(q>=m)
            {
                c+=n-i;
                q-=v[j];
                j++;
            }
            i++;
        }
        cout<<c;

}
