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
        int n,p=0;
        cin>>n;
        string a,b;
        cin>>a>>b;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                if(a[i]=='R' || b[i]=='R')
                     p=1;
            }
        }
        if(p==1)
            cout<<"No"<<"\n";
        else
            cout<<"Yes"<<"\n";
    }
}
