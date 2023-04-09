#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll x = 0 ,y = 0 ,  a = 0,  b = 0;
        cin >> x >> y >> a >> b;
        ll ans = 0;
        if(x == 0 and y == 0)
        {
            cout << 0 << '\n';
        }
        if(x > 0  and y > 0)
        {
            ll dd = x + y;
            ll ans2 = dd * a;
            ll c = min(x, y);
            ll d = max(x, y);
             ans += c * b;
             d -= c;
             ans += d * a;
         
            cout << min(ans2, ans) << '\n';
 
        }
      if(x == 0 and y > 0)
      {
          cout <<  y * a << '\n';
          //cout << ans << '\n';
      }
      if(y == 0 and x > 0)
      {
          //ans += x * a;
          cout << x * a << '\n';
      }
      x = 0 ,y = 0 ,  a = 0,  b = 0, ans = 0;
 
 
 
 
    }
}