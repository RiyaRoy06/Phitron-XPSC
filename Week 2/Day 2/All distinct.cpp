#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
     set<ll>s;
     ll n;
     cin>>n;
     for(int i=0;i<n;i++){
         ll x;
         cin>>x;
         s.insert(x);
     }
      if((n-s.size())%2==0)
        cout<<s.size()<<endl;
      else
        cout<<s.size()-1<<endl;
    }
}
