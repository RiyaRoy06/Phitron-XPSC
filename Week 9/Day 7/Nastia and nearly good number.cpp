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
    ll n,m;
    cin>>n>>m;
    if(m==1)
        cout<<"NO"<<"\n";
    else cout<<"YES"<<"\n"<<n<<" "<<n*m<<" "<<n*(m+1)<<"\n";
    }
}



