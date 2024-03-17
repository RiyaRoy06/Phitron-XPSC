#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
cin.tie(NULL);
ll n,b,c,p=0;
cin>>n;ll a[n];
for(ll i=0;i<n;i++)
{
    cin>>a[i];
    p+=a[i];
}
sort(a,a+n);
if(p%2==0)
    cout<<p;
else
{
    for(ll i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            b=a[i];break;
        }
    }c=p-b;
    cout<<c;
}
}


