#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
 
    ll t, ans; cin >> t;
    while(t--)
    {
        ll x, y ; ans = 0; cin >> x >> y;
        if( (x == y) or  (abs(x - y) == 1) )
        {
            ans = x + y;
        }
        else
        {
            ans = max(x, y) + max(x , y) - 1;
        }
        cout << ans << endl;
    }
 
 
}