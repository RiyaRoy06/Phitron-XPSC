#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
cin.tie(NULL);
int a,b,c,p;
cin>>a>>b>>c;
for(int i=a;i<=b;i++)
{
    if(i%c==0) {p=i;break;}
    else p=-1;
}
cout<<p;
}



