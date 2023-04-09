#include <bits/stdc++.h>
using  namespace std;
using ll = long long;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
       ll x1, y1, x2,y2; cin >> x1 >> y1 >> x2 >> y2;
       ll ans = (x1 - x2)*(y1 - y2);
       cout << 1 + ans << '\n';
 
    }
 
}