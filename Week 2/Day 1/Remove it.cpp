#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,b,m;
    cin>>n>>b;
    vector<ll>a(n),c;
    int p = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
         if(a[i]!=b)
         {
             p++;
             c.push_back(a[i]);
         }
    }
    for(int i=0;i<p;i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<"\n";


}






