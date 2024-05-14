#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	ll x,y;
	cin>>x>>y;
     x=(y * log(x)) - (x * log(y));
	if(((y * log(x)) - (x * log(y)))>0)
        cout<<">";
    else if(((y * log(x)) - (x * log(y)))==0)
        cout<<"=";
    else cout<<"<";
}
















