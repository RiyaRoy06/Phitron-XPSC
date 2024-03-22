#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll p=0;
    string s,t;
    cin>>s>>t;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]!=t[i])
        p++;
    }
    cout<<p;


}







