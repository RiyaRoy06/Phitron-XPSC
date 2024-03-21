#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {

       vector<long long>v;
       queue<long long>q;
       int i=0,j=0;
       while(j<N){
           if(A[j]<0) q.push(A[j]);
           if((j-i+1)<K){
               j++;
           }
           else{
               if(!q.empty()){
                   v.push_back(q.front());
                   if(A[i]<0) q.pop();

               }
               else v.push_back(0);
               i++;
               j++;
           }
       }
       return v;
 }
int main()
{

}
