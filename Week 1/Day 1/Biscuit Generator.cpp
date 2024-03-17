#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
cin.tie(NULL);
int a,b,c,p=0;
cin>>a>>b>>c;
for(int i=1;i<=c;i++)
{
    if(i%a==0) p++;
}cout<<p*b;
}


