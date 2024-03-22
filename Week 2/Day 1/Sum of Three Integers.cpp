#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,b,m;
    cin>>n>>b;
    int p = 0;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
           m=b-i-j;
           if(m>=0&&m<=n) p++;
        }
    }
    cout<<p<<"\n";


}





