#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,m,h;
	    cin>>n>>m>>h;
	    long long int a[n], b[m],p,q,r,s,o=0,y=0;
	    for(long long int i=0;i<n;i++)
	      cin>>a[i];
	    for(long long int i=0;i<m;i++)
	      cin>>b[i];
	    if(n>m)
	     {
	         for(long long int i=0;i<=(m-1);i++)
	         {
	             q=b[i]*h;
	             p=min(a[i],q);

	             o+=p;
	         }
	         cout<<o<<endl;
	     }
	     else
	     {
	         for(long long int i=0;i<=(n-1);i++)
	         {
	             s=b[i]*h;
	             r=min(a[i],s);
	            // s=r*h;
	             y+=r;
	         }
	         cout<<y<<endl;
	     }
	}
	return 0;
}

