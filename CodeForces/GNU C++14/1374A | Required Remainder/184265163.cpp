#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll x, y ,n;
        cin >> x >> y >> n;
        ll ans = n;
        n -= y;
        ll p = n % x;
        ans -= p;
        cout << ans << '\n';
 
 
 
 
 
 
 
 
    }
}