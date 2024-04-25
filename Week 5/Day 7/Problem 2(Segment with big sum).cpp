#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        int n,s;
        cin>>n>>s;
        vector<int>a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        ll i=0,j=0,p=INT_MAX,c=0;
        while(i<n)
        {
            c+=a[i];
            while(c>=s)
            {
                p=min(p,i-j+1);
                c-=a[j];
                j++;
            }
            i++;
        }
        if (p==INT_MAX) cout<<-1<<"\n";
        else cout<<p;
    }



