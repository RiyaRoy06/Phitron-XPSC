#include<bits/stdc++.h>
#define ll long long int
using namespace std;
class Solution{
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here
        int l=0,r=0;
        long long s=0,a=0;
        while(r<N)
        {
            s+=Arr[r];
            if((r-l+1)==K)
            {
                a=max(a,s);
                s-=Arr[l];
                l++;
                r++;
            }
            else
            r++;
        }
        return a;
    }
};
int main()
{

}
