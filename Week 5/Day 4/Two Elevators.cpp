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
        ll n,x,y;
        cin>>n>>x>>y;
        ll p=n-1;
        ll q=abs(x-y);
        ll m=y-1+q;
        if(p<m) cout<<1<<"\n";
        else if(p>m) cout<<2<<"\n";
        else cout<<3<<"\n";
    }
}





