#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100100];
    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+(n-1)+1);
    for(int i=1;i<=n;i++)
    {
        if(a[i]!=i)
        {
            cout<<i<<endl;
            break;
        }
    }
}
