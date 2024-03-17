#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
if(s.size()==1)
{
    for(int i=0;i<3;i++)
    {
        cout<<0;
    }cout<<s;
}
else if(s.size()==2)
{
    for(int i=0;i<2;i++)
    {
        cout<<0;
    }cout<<s;
}
else if(s.size()==3)
{
    for(int i=0;i<1;i++)
    {
        cout<<0;
    }cout<<s;
}
else if(s.size()==4)
{
    cout<<s;
}
}


