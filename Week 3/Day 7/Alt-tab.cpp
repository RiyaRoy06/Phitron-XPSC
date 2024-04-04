#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

        int n;
        cin>>n;
        vector<string>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        map<string,ll>mp;
        string s,m;
        for(int i=n-1;i>=0;i--)
        {
            m=a[i];
            mp[a[i]]++;
            if(mp[a[i]]==1)
            {
                s.push_back(m[m.size()-2]);
                s.push_back(m[m.size()-1]);
            }
        }
        cout<<s<<"\n";

}




