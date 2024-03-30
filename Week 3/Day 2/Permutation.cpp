#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;while(t--){
    int n,b,m,p;
    cin>>n;
    int a[n][n-1];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
        cin>>a[i][j];
        }
    }
    if(a[0][0]==a[1][0] || a[0][0]==a[2][0])
    m=a[0][0];
   else m=a[1][0];
   for(int i=0;i<n;i++){
   if(a[i][0]!=m)
   {
    p=i;break;
   }
   }
   cout<<m<<" ";
   for(int i=0;i<n-1;i++)
      cout<<a[p][i]<<" ";
   cout<<endl;

    }

}






