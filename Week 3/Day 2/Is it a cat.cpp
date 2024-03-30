#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
            if(s[i-1]==s[i])
            {
              s.erase(i,1);
                i--;
            }
        }
        if(s=="meow")
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
