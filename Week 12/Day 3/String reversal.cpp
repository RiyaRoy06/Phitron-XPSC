#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds=tree<T, null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

        ll n,k;
        cin>>n;
        string s;
        cin>>s;
        string r;
        r=s;
        reverse(r.begin(),r.end());

        map<char,vector<int>>pos_s,pos_r;
        for(ll i=0;i<n;i++)
        {
            pos_s[s[i]].push_back(i);
            pos_r[r[i]].push_back(i);
        }
        vector<ll>a(n);
        for(char ch='a';ch<='z';ch++)
        {
            for(ll i=0;i<pos_s[ch].size();i++)
            {
                a[pos_r[ch][i]]=pos_s[ch][i];
            }
        }
        pbds<ll>p;
        k=0;
        for(ll i=n-1;i>=0;i--)
        {
            k+=p.order_of_key(a[i]);
            p.insert(a[i]);
        }
        cout<<k<<"\n";
}

