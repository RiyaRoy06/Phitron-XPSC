#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        int m=0,p=0;
        s+=s;
        for(int i=s.size()-1;i>=0;i--)
        {
        if(s[i]=='g')
        p=i;
        if(s[i]==c)
        m=max(m,p-i);
         }
        cout<<m<<"\n";
    }
}
