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
        priority_queue<int>pq;
        int s=0;
        for(int i=0;i<n;i++)
        {
            int m;
            cin>>m;
            if(m==0)
            {
                if(!pq.empty())
                {
                    s+=pq.top();
                    pq.pop();
                }
            }
            else pq.push(m);
        }
        cout<<s<<"\n";
    }
}
