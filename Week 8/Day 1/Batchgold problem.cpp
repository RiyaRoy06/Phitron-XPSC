#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	ll n,k,q,r;
    cin>>n;
    k=(n/2);
    cout<<k<<endl;
    if(n%2==0)
    {
        for(ll i=1;i<=k;i++)
            cout<< 2<<" ";
    }
    else if(n%2 != 0){
        cout<< 3 <<" ";
        for(ll j=0;j<k-1;j++){
            cout<< 2<<" ";
        }
    }
}














