#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n , m, b, c; cin >> n >> m >> b >> c;
    ll a[n + 1][m + 1] = {0, 0};
    cout << b << ' ' << c << endl;
    a[b][c] = 1;
    a[1][c] = 1;
    cout << 1 << ' ' << c << endl;
    for(ll i = 1; i <= n; i++)
    {
        if(i & 1)
        {
            for(ll j = 1; j <= m; j++)
            {
                if(!a[i][j])
                    cout << i << ' ' << j << endl;
            }
 
        }
        else
        {
            for(ll j = m; j >= 1; j--)
            {
                if(!a[i][j])
                    cout << i << ' ' << j << endl;
            }
 
        }
    }
}