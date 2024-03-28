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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(') c++;
            else
            {
               if(c>0 && s[i]==')')
                  c--;
            }
        }
            cout<<c<<endl;
    }
}
