//  SS //  laptop
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        ll x1, x2, y1, y2 , z1, z2; cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2; ll ans = 0;
 
 
 
 
 
        ll min21 = min(z1 , y2);
        ans += (min21 * 2);
        z1 -= min21 , y2 -= min21;
 
 
        ll oo = x2 + y2;
        if(y1 > oo)
        {
            y1 -= oo;
            ans -= (y1 * 2);
        }
 
 
 
 
 
 
 
 
 
 
 
        cout << ans << endl;
 
 
 
 
 
 
 
    }
 
 
 
}