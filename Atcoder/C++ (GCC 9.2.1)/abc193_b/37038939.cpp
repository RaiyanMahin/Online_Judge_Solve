#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll n; cin >> n;
    ll mn = 1e18;
    ll boo = 0;
    while(n--)
    {
        ll a , b , c; cin >> a >> b >> c;
        if(a < c)
        {
            mn = min(mn , b);
            boo = 1;

        }
    }
    if(boo == 0)
    {
        return cout << -1, 0;
    }
     return cout << mn, 0;






}
