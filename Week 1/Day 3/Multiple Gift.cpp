#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  ll n,b,c,p=0;
  cin>>n>>b;
  while(n<=b)
  {
      n=n*2;
      p++;
  }
  cout<<p;
}



