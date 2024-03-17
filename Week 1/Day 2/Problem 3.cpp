#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>> b[i];
    int l=0,r=0;long long ans=0;
    while(l<n && r<m){
        int c=0,p=0,curr=a[l];
        while(a[l]==curr&&l<n){
            c++;
            l++;
        }
        while(curr>b[r]&&r<m){
            r++;
        }
        while(b[r]==curr&&r<m){
            p++;
            r++;
        }
        ans+=(c*p);

    }cout<<ans<<endl;
}



