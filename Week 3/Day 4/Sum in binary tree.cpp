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
        ll n;
        cin>>n;
        ll s=n;
        while(n!=0)
        {
            n=n/2;
            s+=n;
        }
        cout<<s<<"\n";
    }
}
