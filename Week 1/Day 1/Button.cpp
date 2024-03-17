#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
cin.tie(NULL);
int a,b;
cin>>a>>b;
int p=max(a,b);
if(b==a) cout<<p*2;
else cout<<p*2-1;
}

