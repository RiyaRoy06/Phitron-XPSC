#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
sort(s.begin(),s.end());
int cnt[26]={0};
for(int i=0;i<s.size();i++)
{
    int v=s[i]-'a';
    cnt[v]++;
}
for(int i=0;i<26;i++)
{
    if(cnt[i]==0)
    {
        char p=i+'a';
        cout<<p;
        return 0;
    }

}
cout<<"None";
}



