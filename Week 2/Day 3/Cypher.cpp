#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
        int p,m,c=0;
        cin>>p;
        string s;
        cin>>s;
        for(int i=0;i<p;i++)
        {
            if(s[i]=='D') {s[i]='U';c++;}
            else {s[i]='D';c--;}
        }
        m=(a[i]+c+10)%10;
        cout<<m<<" ";
        }
        cout<<"\n";

    }
}

