#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t; ll ans = 0;
    while(t--)
    {
        ll n , m, x, y; cin >> n >> m >> x >> y;
        ans = 0;
        while(n--)
        {
            string s; cin >> s;
            for(ll i = 0; i < m; i++)
            {
                if(s[i] == '.')
                {
                    if(s[i + 1] == '.' and (i + 1) < m)
                    {
                        ans += min(2 * x, y);
                        i++;
 
                    }
                    else
                    {
                        ans += x;
 
                    }
                }
            }
 
        }
 
        cout << ans << endl;
    }
 
 
}