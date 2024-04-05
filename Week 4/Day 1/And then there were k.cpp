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
        int n,i;
        cin>>n;
        for( i=1;i<=n;)
        {
            i=i*2;
        }
        cout<<i/2 - 1<<"\n";
    }
}
