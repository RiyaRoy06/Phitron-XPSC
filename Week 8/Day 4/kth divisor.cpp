#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	ll n,k;
	cin>>n>>k;
     vector<ll>a;
	for(ll i=1;i*i<=n;i++)
    {
        if((n%i)==0)
        {
           a.push_back(i);
           if((n/i)!=i)
                a.push_back(n/i);
        }
    }
    sort(a.begin(),a.end());
    if(k<=a.size())
        cout<<a[k-1];
    else cout<<-1;
}

















