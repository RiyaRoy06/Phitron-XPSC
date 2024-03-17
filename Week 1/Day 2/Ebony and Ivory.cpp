#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,cn=0;
    cin>>a>>b>>c;
    for(int i=0;i<c/a+1;++i)
    {
        for(int j=0;j<c/b+1;++j)
        {
            if(i*a+j*b==c){
                     cn++;
        }                }
    }
        if(cn>0)
           cout<<"YES"<<endl;
        else
           cout<<"NO"<<endl;
}

