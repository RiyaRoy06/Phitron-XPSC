#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, b;
    cin >> n >> b;
    ll p = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            for (int k = 0; k <= n; k++)
            {
                if ((i + j + k) <= n && (i * j * k) <= b)
                    p++;
            }
        }
    }
    cout << p << endl;


}




