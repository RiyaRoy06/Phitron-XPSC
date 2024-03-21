#include<bits/stdc++.h>
#define ll long long int
using namespace std;
class Solution{
public:
int search(string pat, string txt) {
    int s = 0;
    map<char, int> mp;
    for(auto x : pat)
        mp[x]++;
    int c = mp.size();
    int p = pat.size();
    int i = 0, j = 0;
    while(j < txt.length()){
        if(mp.find(txt[j]) != mp.end()){
            mp[txt[j]]--;
            if(mp[txt[j]] == 0)
                c--;
        }
        if(j-i+1<p) j++;
        else if(j-i+1==p){
            if(c==0)
                s++;
                if(mp.find(txt[i]) != mp.end()){
                    mp[txt[i]]++;
                    if(mp[txt[i]] == 1)
                        c++;
                }
                i++;
                j++;
        }
    }
    return s;
  }
};
int main()
{

}
