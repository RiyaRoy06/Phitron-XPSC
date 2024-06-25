#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    for(char i='a';i<='z';i++)
    {
		for(int j=0;j<s.size();j++)
        {
			if(s[j]==i)
            {
				s.erase(j,1);
				j--;
				k--;
			}
			if(k==0)
            {
				cout<<s;
                return 0;
			}	
		}
	}
} 
	








