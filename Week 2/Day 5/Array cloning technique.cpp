#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
		int n,c=0;
		cin>>n;
		map<int,int>mp;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			mp[x]++;
			c=max(c,mp[x]);
		}
		int res=n-c;
		while(n>c){
			c*=2;
			res++;
		}
		cout<<res<<"\n";
	}

}
