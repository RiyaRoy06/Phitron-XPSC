#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds=tree<T, null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        long long k=0;
        pbds<int>p;
        for(int i=n-1;i>=0;i--)
        {
            k += p.order_of_key(a[i]);
            p.insert(a[i]);
        }
        cout<<k<<"\n";
    }
}

